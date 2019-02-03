#include "player.h"
//#include "sideScroll.h"

//the object that the player collides with and gets points
class point :public sideScroll {

public:

	point();
	~point();

	sf::RectangleShape getRectangle();
	sf::Sprite getSprite();

	void setPosition(sf::Vector2f v);
	void setSize(sf::Vector2f s);
	void move(int p);
	int getScore();
	void addPoint();

	bool getCollision(hitBox p);


private:
	sf::RectangleShape rec;
	sf::Sprite coin;
	sf::Texture text;
	int score;

};

