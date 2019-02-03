#include "player.h"

player::player() {
	this->mass = 10;
	this->upVelocity = 0;
	this->setPosition(sf::Vector2f(250, 210));
	this->setSize(sf::Vector2f(40, 60));
	this->rec.setSize(getSize());
	this->rec.setFillColor(sf::Color::Red);
	this->rec.setPosition(getPosition());

	standing.loadFromFile("standMario.png");
	standing.setSmooth(false);
	standing.setRepeated(false);

	sprite.setTexture(standing,true);
	sprite.setPosition(getPosition());

	moveRight[0].loadFromFile("MarioRunRight1.png");//47x,60y
	moveRight[0].setSmooth(false);
	moveRight[0].setRepeated(false);
	moveRight[1].loadFromFile("MarioRunRight2.png");//28x,60y
	moveRight[1].setSmooth(false);
	moveRight[1].setRepeated(false);

	moveRight[2].loadFromFile("MarioRunRight3.png");//54x,60y	
	moveRight[2].setSmooth(false);
	moveRight[2].setRepeated(false);


	moveLeft[0].loadFromFile("MarioRunLeft1.png");
	moveRight[0].setSmooth(false);
	moveRight[0].setRepeated(false);
	moveLeft[1].loadFromFile("MarioRunLeft2.png");
	moveRight[1].setSmooth(false);
	moveRight[1].setRepeated(false);
	moveLeft[2].loadFromFile("MarioRunLeft3.png");
 moveRight[2].setSmooth(false);
	moveRight[2].setRepeated(false);
}
player::~player() {

}

bool player::jump() {
	
	this->setPosition(sf::Vector2f(getPosition().x, getPosition().y - upVelocity));
	upVelocity += (float) Gravity;
	rec.setPosition(getPosition());
	sprite.setPosition(getPosition());
	
	//if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
	//	sprite.setTexture(moveRight[0]);
	//}
	return true;

}

//checks if player is on a platform and stops falling
bool player::onPlatform(platform p[], int amt) {
	for (int i = 0; i < amt; i++) {
		if (getBot() - upVelocity >= p[i].getTop() && getLeft() <= p[i].getRight() && getRight() >= p[i].getLeft() && getBot() <= p[i].getTop()) {
			upVelocity = 0;
			return false;

		}
	}
	return true;
}
 
sf::RectangleShape player::getRec() {
	return rec;
}


sf::Sprite player::getSprite() {
	return sprite;
}

float player::getVelocity() {
	return upVelocity;
}
void player::setVelocity(float v) {

	upVelocity = v;
}



int player::getWallCollision(platform p[], int amt) {

	bool a=true,b=true;


	for (int i = 0; i < amt; i++) {
		a = ((this->getTop() >= p[i].getTop() || this->getBot() >= p[i].getTop()));
		b = (this->getTop() <= p[i].getBot() || this->getTop() <= p[i].getBot());

		if (p[i].getLeft() - playerSpeed <= this->getRight() && a && b&& p[i].getRight()> this->getLeft()) {
		//	cout << i << endl;
			return 2;
		
		}
		else if (p[i].getRight() + playerSpeed >= this->getLeft() && a&& b&& p[i].getLeft()<this->getRight()) {
			return 1;
		}
		 
	}
	return 0;

}




int player::getEnemyCollision(enemy e[], int amt) {

	bool a=true,b=true;


	for (int i = 0; i < amt; i++) {
		a = ((this->getTop() >= e[i].getTop() || this->getBot() >= e[i].getTop()));
		b = (this->getTop() <= e[i].getBot() || this->getTop() <= e[i].getBot());
	

	
		 if (e[i].getRight() + playerSpeed >= this->getLeft() && a&& b&& e[i].getLeft()<this->getRight()) {
		
		
			return i;
		}
		else if (e[i].getLeft() - playerSpeed <= this->getRight() && a && b&& e[i].getRight()> this->getLeft()) {

			return i;

		}
		 
	}
	return -1;

}

int player::onEnemy(enemy e[], int amt) {
	bool a = false, b = false;
	for (int i = 0; i < amt; i++) {
		a = ((this->getLeft() >= e[i].getLeft() || this->getRight() >= e[i].getLeft()));
		b = (this->getLeft() <= e[i].getRight() || this->getLeft() <= e[i].getRight());

		if (this->getBot() + upVelocity <= e[i].getTop() && a && b&&this->getTop() > e[i].getTop() - this->getSize().y + upVelocity) {
		
			upVelocity = 1;
			return i;

		}

	}
	return -1;
}

	bool player::endLevel(endThing e) {
		bool i = false;
		bool a = false, b = false;
	
			a = ((this->getTop() >= e.getTop() || this->getBot() >= e.getTop()));
			b = (this->getTop() <= e.getBot() || this->getTop() <= e.getBot());

			if (e.getLeft() - playerSpeed <= this->getRight() && a && b&& e.getRight()> this->getLeft()) {
				//	cout << i << endl;
				i = true;
				

			}
			else if (e.getRight() + playerSpeed >= this->getLeft() && a&& b&& e.getLeft()<this->getRight()) {
				i = true;
				
			}

		


			return i;
		}


	void player::setSprite(int frame) {
		static int current = 0;
		int change = 0;

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
			if (frame % 240 >= 0 && frame % 240 <= 59) {

				sprite.setTexture(moveRight[0], true);


			}
			else if (frame % 240 >= 60 && frame % 240 <= 119) {

				sprite.setTexture(moveRight[1], true);
			}
			else if (frame % 240 >= 120 && frame % 240 <= 179) {

				sprite.setTexture(moveRight[2], true);
			}
			else if (frame % 240 >= 180 && frame % 240 <= 239) {

				sprite.setTexture(moveRight[1], true);
			}
		
		}
		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
			if (frame % 240 >= 0 && frame % 240 <= 59) {
				
				sprite.setTexture(moveLeft[0],true);
				
				
			}
			else if (frame % 240 >= 60 && frame % 240 <= 119) {
			
				sprite.setTexture(moveLeft[1],true);
			}
			else if (frame % 240>= 120 && frame % 240 <= 179) {
		
				sprite.setTexture(moveLeft[2],true);
			}
			else if (frame % 240 >= 180 && frame % 240 <= 239) {

				sprite.setTexture(moveLeft[1], true);
			}
			
		}
		else {
			sprite.setTexture(standing);
			
		}

		if (current != change) {
			if (change == 2) {
				sprite.setTexture(moveRight[0]);
			}
			else if (change == 1) {
				
			}
			else {
				sprite.setTexture(standing,true);
			}
			current = change;
		}

	}

