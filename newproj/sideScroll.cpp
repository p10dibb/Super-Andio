#include "sideScroll.h"

sideScroll::sideScroll() {
	this->setPosition(sf::Vector2f(0, 0));

}
sideScroll::~sideScroll() {

}
 void sideScroll::move(int player) {
	//cout << "sidescroll" << endl;

	float posx = getPosition().x, posy = getPosition().y;
	

	
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)&&player!=1) {
		
		 posx += playerSpeed;
	
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)&&player!=2) {
		
		posx-= playerSpeed;
		

	}
	setPosition(sf::Vector2f(posx, posy));
}