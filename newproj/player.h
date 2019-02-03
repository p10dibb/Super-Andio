
//#include "platform.h"
#include "end.h"

//the main player 
class player :public hitBox {
	
public:
	player();
	~player();

	bool jump();
	bool onPlatform(platform p[], int amt);

	sf::RectangleShape getRec();
	 
	sf::Sprite getSprite();
	
	float getVelocity();
	void setVelocity(float v);
	int getWallCollision(platform p[], int amt);

	int getEnemyCollision(enemy e[], int amt);
	int onEnemy(enemy e[], int amt);
	bool endLevel(endThing e);
	void setSprite(int frame); 

private:
	float mass;//not used
	float upVelocity;
	sf::RectangleShape rec; //not used from pre graphics
	sf::Sprite sprite;
	sf::Texture standing;
	sf::Texture moveRight[3];
	sf::Texture moveLeft[3];
};