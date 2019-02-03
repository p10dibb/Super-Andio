#include "enemy.h"

//the object that when player collides with ends level (probably a flag)
class endThing :public sideScroll {

public:
	endThing();
	~endThing();
	
	void setPosition(sf::Vector2f v);
	void move(int p);

	sf::Sprite getSprite();

private:
	sf::Texture texture;
	sf::Sprite ending;
	


};