#include "enemy.h"

enemy::enemy() {
	this->setPosition(sf::Vector2f(0, 0));
	this->setSize(sf::Vector2f(30, 35));
	rec.setSize(getSize());
	rec.setPosition(getPosition());
	rec.setFillColor(sf::Color::Green);

	mTexture.setRepeated(true);
	mTexture.setSmooth(true);
	mTexture.loadFromFile("enemy.png");
	mBaddy.setTexture(mTexture);
	


	speed = .2;
	distance = 2000;

}
enemy::~enemy() {

}



sf::RectangleShape enemy::getRectangle() {
	return rec;
}

sf::Sprite enemy:: getSprite() {
	return mBaddy;
}

void enemy::setSize(sf::Vector2f s) {
	hitBox::setSize(s);
	rec.setSize(getSize());

}

void enemy::setPosition(sf::Vector2f p) {

	hitBox::setPosition(p);
	rec.setPosition(getPosition());
	mBaddy.setPosition(getPosition());

}

void enemy::setSpeed(float s) {
	speed = s;

}
void enemy::setDistance(float pixles) {
	distance = pixles/speed;

}

void enemy:: move(int player) {

}
void enemy::move(int p,int frames) {
	
	int count = frames;

	sideScroll::move(p);
	
//	cout << count % (int)distance * 2 <<"  "<<distance<< endl;
	 if(count%(int)distance*2 <distance){
		setPosition(sf::Vector2f(getPosition().x + speed, getPosition().y));
		
	
	}
	else if (count % (int)distance*2> distance) {
		setPosition(sf::Vector2f(getPosition().x - speed, getPosition().y));
	

	
	
	}

	rec.setPosition(getPosition());
	mBaddy.setPosition(getPosition());

}