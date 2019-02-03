/*
Names-			Joseph Lewis				Marco Arceo				Morgan Ross			Paul Dibble
ID-				11567186					11510352				11564043			11569047
contribution-	Programmed intro screen		programmed networt chat	Graphic Design		General coding/the rest

project: to replicate Mario and add a Bit of WSU and Andy Ofallon to it as well as to add some amount of network stuff for extra credit



//the file main.cpp got corupted so int main() is in intro.cpp


order of files:
hitbox.h
sidescroll.h
background.h
platform.h
enemy.h
end.h
player.h
point.h		
gameOver.h
winScreen.h
level1.h

*/



#pragma once
#include<SFML/Graphics.hpp>
#include <SFML\Audio.hpp>
#include <iostream>
#include <WS2tcpip.h>
#include <string>
#include <sstream>
#include <chrono>
#include <thread>


#pragma comment (lib, "ws2_32.lib")
using namespace::std;
using namespace std::this_thread;

using namespace std::chrono;


#define playerSpeed .8		//the speed evvery other object moves 
#define Gravity -.03		//speed player falls
#define windowWidth 1000	//window x axis
#define windowHight 600		//window y axis


//parent class of all of the other objects adds a collision box to objects
class hitBox {
public:
	hitBox();
	hitBox(sf::Vector2f s, sf::Vector2f p);

virtual	~hitBox();

	sf::Vector2f getPosition();
	sf::Vector2f getSize();
	float getLeft();
	float getRight();
	float getTop();
	float getBot();

	void setPosition(sf::Vector2f p);
	void setSize(sf::Vector2f s);

private:
	sf::Vector2f position;
	sf::Vector2f size;
	float left;
	float right;
	float top;
	float bot;

};