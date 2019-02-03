#include "platform.h"

platform::platform() {
	rect.setPosition(0, 0);
	rect.setFillColor(sf::Color::Black);
	hitBox::setSize(sf::Vector2f(500, 50));
	
	rect.setSize(getSize());

	road.loadFromFile("road.png");
	road.setSmooth(true);
	road.setRepeated(true);

	sprite.setTexture(road);



	sprite.setPosition(getPosition());
}
platform::~platform() {

}

void platform::move(int p) {

	sideScroll::move(p);
	rect.setPosition(getPosition());
	sprite.setPosition(getPosition());

}
sf::RectangleShape platform:: getRectangle() {
	return rect;

}

sf::Sprite platform::getSprite() {
	return sprite;
}

void platform::setSize(sf::Vector2f s){
	hitBox::setSize(s);
	rect.setSize(getSize());

	float a = s.x / 500;
	sprite.scale(sf::Vector2f(a, 1));


}
void platform::setPosition(sf::Vector2f p) {

	hitBox::setPosition(p);
	sprite.setPosition(getPosition());
	rect.setPosition(getPosition());
}


void platform::RemoveTexture(){


	sprite.scale(sf::Vector2f(.0001, .0001));

}