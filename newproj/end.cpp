#include "end.h"


endThing::endThing() {

	setPosition(sf::Vector2f(0, 0));
	setSize(sf::Vector2f(50, 181));

	texture.loadFromFile("end.png");
	texture.setRepeated(true);
	texture.setSmooth(true);
	

	ending.setTexture(texture);
	ending.setPosition(getPosition());

}

endThing::~endThing() {

}


sf::Sprite endThing::getSprite() {

	return ending;

}

void endThing::setPosition(sf::Vector2f v) {
	hitBox::setPosition(v);
	ending.setPosition(getPosition());

}

void endThing::move(int p) {
	sideScroll::move(p);
	ending.setPosition(getPosition());


}