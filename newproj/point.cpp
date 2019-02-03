#include "point.h"



point::point() {
	this->setPosition(sf::Vector2f(0, 0));
	this->setSize(sf::Vector2f(12, 15));
	rec.setFillColor(sf::Color::Yellow);
	rec.setSize(getSize());
	rec.setPosition(getPosition());

	text.setRepeated(true);
	text.setSmooth(true);
	text.loadFromFile("point.png");
	
	coin.setTexture(text);
	coin.setPosition(getPosition());

	score = 0;
}
point::~point() {

}

sf::RectangleShape point::getRectangle() {
	return rec;

}
sf::Sprite point::getSprite() {
	return coin;
}

void point::setPosition(sf::Vector2f v) {
	hitBox::setPosition(v);
	rec.setPosition(getPosition());
	coin.setPosition(getPosition());

}

void point::setSize(sf::Vector2f s) {
	hitBox::setSize(s);
	rec.setSize(getSize());


}

void point::move(int p) {
	//int p = 0;
	sideScroll::move(p);
	rec.setPosition(getPosition());
	coin.setPosition(getPosition());

}

int point::getScore() {
	return score;
}
void point::addPoint() {
	score++;
}

bool point::getCollision(hitBox p) {
	if (getLeft() <= p.getRight() && getRight() >= p.getLeft() && getBot() >= p.getTop() && getTop() <= p.getBot()) {
	
		setPosition(sf::Vector2f(-30, -30));
		return true;

	}
	return false;
}