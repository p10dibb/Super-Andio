#include "sideScroll.h"

//level background 
class background  {

public:
	background();
	~background();

	void move(int p);

	void setBackground(string b);
	void reset();
	void setPosition(sf::Vector2f p);

	sf::Sprite getSprite();

private:
	sf::Texture back;
	sf::Sprite ground;

	float speed;

};