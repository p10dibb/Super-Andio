#include "hitBox.h"
hitBox::hitBox() {
	position = sf::Vector2f(0, 0);
	size = sf::Vector2f(0, 0);
	this->left = 0;
	this->right = 0;
	this->top = 0;
	this->bot = 0;
}

hitBox::hitBox(sf::Vector2f s, sf::Vector2f p) {
	position = p;
	size = s;
	this->left = position.x - ((1 / 2)*size.x);
	this->right = position.x + ((1 / 2)*size.x);
	this->top = position.x - ((1 / 2)*size.y);
	this->bot = position.x + ((1 / 2)*size.y);
}
hitBox::~hitBox() {

}

sf::Vector2f hitBox::getPosition() {
	return position;
}


sf::Vector2f hitBox::getSize() {
	return size;
}
float hitBox::getLeft() {
	return left;
}
float hitBox::getRight() {
	return right;
}
float hitBox::getTop() {
	return top;
}
float hitBox::getBot() {
	return bot;
}

void hitBox::setPosition(sf::Vector2f p) {

	position = p;


	this->left = (position.x);
	this->right = position.x + size.x;
	this->top = position.y;
	this->bot = position.y + (size.y);
}

void hitBox::setSize(sf::Vector2f s) {

	size = s;

	this->left = (position.x - size.x);
	this->right = position.x + size.x;
	this->top = position.y - (size.y);
	this->bot = position.y + (size.y);
}