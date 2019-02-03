#include "platform.h"

//very  basic enemy moves back and forth on set path
class enemy :public sideScroll {

public:
	enemy();
	~enemy();


	sf::RectangleShape getRectangle();
	sf::Sprite getSprite();

	void setPosition(sf::Vector2f p);
	void setSize(sf::Vector2f s);
	void setSpeed(float s);
	void setDistance(float pixles);

	void move(int player);//doesnt do anything

	void move(int p, int frames);


private:
	sf::RectangleShape rec;
	sf::Sprite mBaddy;
	sf::Texture mTexture;
	float speed;
	float distance;

};