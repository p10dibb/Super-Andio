#include "background.h"


//platform stuff all the objects the player walks on
class platform:public sideScroll {

public:
	platform();
	~platform();
	sf::RectangleShape getRectangle();
	sf::Sprite getSprite();
	
	void RemoveTexture();

	void setSize(sf::Vector2f s);
	void setPosition(sf::Vector2f p);

	void move(int p);


private: 
	sf::RectangleShape rect;
	sf::Texture road;
	sf::Sprite sprite;


};