#include "background.h"

background::background() {

	speed = playerSpeed / 17;
	string s = "background.png";

	back.loadFromFile(s);
	back.setRepeated(true);
	back.setSmooth(true);
	ground.setTexture(back);

	ground.setPosition(sf::Vector2f(-30,0));

}
background::~background() {

}

void background::move(int p){

	float posX = ground.getPosition().x, posY = ground.getPosition().y;


	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A) && p != 1) {

		posX += speed;

	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D) && p != 2) {

		posX -= speed;


	}

	ground.setPosition(sf::Vector2f(posX, posY));


}

sf::Sprite background::getSprite() {
	return ground;
}



void background::setBackground(string b) {
	back.loadFromFile(b);
	ground.setTexture(back);
}
void background::reset() {
	ground.setPosition(sf::Vector2f(-150,0));
}
void background::setPosition(sf::Vector2f p) {
	ground.setPosition(p);
}