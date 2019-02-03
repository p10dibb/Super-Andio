
#include "level1.h"

//start screen - Joseph lewis
void startScreen() {


	sf::Font font;

	font.loadFromFile("SuperMario256.ttf");

	sf::RenderWindow window(sf::VideoMode(2000, 1000), "Super Andio");
	sf::RectangleShape door;
	door.setSize(sf::Vector2f(100, 300));
	door.setOutlineThickness(1);
	door.setPosition(1500, 800);
	door.setOutlineColor(sf::Color(100, 70, 35));
	door.setFillColor(sf::Color(100, 70, 35));

	sf::RectangleShape door2;
	door2.setSize(sf::Vector2f(100, 300));
	door2.setOutlineThickness(1);
	door2.setPosition(1000, 800);
	door2.setOutlineColor(sf::Color(100, 70, 35));
	door2.setFillColor(sf::Color(100, 70, 35));

	sf::RectangleShape door3;
	door3.setSize(sf::Vector2f(100, 300));
	door3.setOutlineThickness(1);
	door3.setPosition(500, 800);
	door3.setOutlineColor(sf::Color(100, 70, 35));
	door3.setFillColor(sf::Color(100, 70, 35));

	sf::RectangleShape black1;
	black1.setSize(sf::Vector2f(250, 250));
	black1.setPosition(0, 0);
	black1.setFillColor(sf::Color::Black);

	sf::RectangleShape black2;
	black2.setSize(sf::Vector2f(250, 250));
	black2.setPosition(250, 0);
	black2.setFillColor(sf::Color::Black);

	sf::RectangleShape black3;
	black3.setSize(sf::Vector2f(250, 250));
	black3.setPosition(500, 0);
	black3.setFillColor(sf::Color::Black);

	sf::RectangleShape black4;
	black4.setSize(sf::Vector2f(250, 250));
	black4.setPosition(750, 0);
	black4.setFillColor(sf::Color::Black);

	sf::RectangleShape black5;
	black5.setSize(sf::Vector2f(250, 250));
	black5.setPosition(1000, 0);
	black5.setFillColor(sf::Color::Black);

	sf::RectangleShape black6;
	black6.setSize(sf::Vector2f(250, 250));
	black6.setPosition(1250, 0);
	black6.setFillColor(sf::Color::Black);

	sf::RectangleShape black7;
	black7.setSize(sf::Vector2f(250, 250));
	black7.setPosition(1500, 0);
	black7.setFillColor(sf::Color::Black);

	sf::RectangleShape black8;
	black8.setSize(sf::Vector2f(250, 250));
	black8.setPosition(1750, 0);
	black8.setFillColor(sf::Color::Black);

	sf::RectangleShape black1a;
	black1a.setSize(sf::Vector2f(250, 250));
	black1a.setPosition(0, 250);
	black1a.setFillColor(sf::Color::Black);

	sf::RectangleShape black2a;
	black2a.setSize(sf::Vector2f(250, 250));
	black2a.setPosition(250, 250);
	black2a.setFillColor(sf::Color::Black);

	sf::RectangleShape black3a;
	black3a.setSize(sf::Vector2f(250, 250));
	black3a.setPosition(500, 250);
	black3a.setFillColor(sf::Color::Black);

	sf::RectangleShape black4a;
	black4a.setSize(sf::Vector2f(250, 250));
	black4a.setPosition(750, 250);
	black4a.setFillColor(sf::Color::Black);

	sf::RectangleShape black5a;
	black5a.setSize(sf::Vector2f(250, 250));
	black5a.setPosition(1000, 250);
	black5a.setFillColor(sf::Color::Black);

	sf::RectangleShape black6a;
	black6a.setSize(sf::Vector2f(250, 250));
	black6a.setPosition(1250, 250);
	black6a.setFillColor(sf::Color::Black);

	sf::RectangleShape black7a;
	black7a.setSize(sf::Vector2f(250, 250));
	black7a.setPosition(1500, 250);
	black7a.setFillColor(sf::Color::Black);

	sf::RectangleShape black8a;
	black8a.setSize(sf::Vector2f(250, 250));
	black8a.setPosition(1750, 250);
	black8a.setFillColor(sf::Color::Black);

	sf::RectangleShape black1b;
	black1b.setSize(sf::Vector2f(250, 250));
	black1b.setPosition(0, 500);
	black1b.setFillColor(sf::Color::Black);

	sf::RectangleShape black2b;
	black2b.setSize(sf::Vector2f(250, 250));
	black2b.setPosition(250, 500);
	black2b.setFillColor(sf::Color::Black);

	sf::RectangleShape black3b;
	black3b.setSize(sf::Vector2f(250, 250));
	black3b.setPosition(500, 500);
	black3b.setFillColor(sf::Color::Black);

	sf::RectangleShape black4b;
	black4b.setSize(sf::Vector2f(250, 250));
	black4b.setPosition(750, 500);
	black4b.setFillColor(sf::Color::Black);

	sf::RectangleShape black5b;
	black5b.setSize(sf::Vector2f(250, 250));
	black5b.setPosition(1000, 500);
	black5b.setFillColor(sf::Color::Black);

	sf::RectangleShape black6b;
	black6b.setSize(sf::Vector2f(250, 250));
	black6b.setPosition(1250, 500);
	black6b.setFillColor(sf::Color::Black);

	sf::RectangleShape black7b;
	black7b.setSize(sf::Vector2f(250, 250));
	black7b.setPosition(1500, 500);
	black7b.setFillColor(sf::Color::Black);

	sf::RectangleShape black8b;
	black8b.setSize(sf::Vector2f(250, 250));
	black8b.setPosition(1750, 500);
	black8b.setFillColor(sf::Color::Black);

	sf::RectangleShape black1c;
	black1c.setSize(sf::Vector2f(250, 250));
	black1c.setPosition(0, 750);
	black1c.setFillColor(sf::Color::Black);

	sf::RectangleShape black2c;
	black2c.setSize(sf::Vector2f(250, 250));
	black2c.setPosition(250, 750);
	black2c.setFillColor(sf::Color::Black);

	sf::RectangleShape black3c;
	black3c.setSize(sf::Vector2f(250, 250));
	black3c.setPosition(500, 750);
	black3c.setFillColor(sf::Color::Black);

	sf::RectangleShape black4c;
	black4c.setSize(sf::Vector2f(250, 250));
	black4c.setPosition(750, 750);
	black4c.setFillColor(sf::Color::Black);

	sf::RectangleShape black5c;
	black5c.setSize(sf::Vector2f(250, 250));
	black5c.setPosition(1000, 750);
	black5c.setFillColor(sf::Color::Black);

	sf::RectangleShape black6c;
	black6c.setSize(sf::Vector2f(250, 250));
	black6c.setPosition(1250, 750);
	black6c.setFillColor(sf::Color::Black);

	sf::RectangleShape black7c;
	black7c.setSize(sf::Vector2f(250, 250));
	black7c.setPosition(1500, 750);
	black7c.setFillColor(sf::Color::Black);

	sf::RectangleShape black8c;
	black8c.setSize(sf::Vector2f(250, 250));
	black8c.setPosition(1750, 750);
	black8c.setFillColor(sf::Color::Black);



	sf::RectangleShape hall;
	hall.setSize(sf::Vector2f(2000, 1000));
	hall.setPosition(0, 0);
	hall.setFillColor(sf::Color(50, 50, 50));

	sf::CircleShape knob;
	knob.setRadius(5);
	knob.setFillColor(sf::Color(0, 0, 0, 255));
	knob.setPosition(1510, 900);

	sf::CircleShape knob2;
	knob2.setRadius(5);
	knob2.setFillColor(sf::Color(0, 0, 0, 255));
	knob2.setPosition(1010, 900);

	sf::CircleShape knob3;
	knob3.setRadius(5);
	knob3.setFillColor(sf::Color(0, 0, 0, 255));
	knob3.setPosition(510, 900);

	sf::Text title;
	title.setFont(font);
	title.setString("SUPER ANDIO");
	title.setCharacterSize(50);
	title.setColor(sf::Color::Red);
	title.setStyle(sf::Text::Bold);
	title.setPosition(800, 100);

	sf::Text command;
	command.setFont(font);
	command.setCharacterSize(50);
	command.setString("press space to continue");
	command.setColor(sf::Color::Red);
	command.setStyle(sf::Text::Bold);
	command.setPosition(600, 500);

	sf::Text begin;
	begin.setFont(font);
	begin.setCharacterSize(100);
	begin.setString("office hours have begun");
	begin.setColor(sf::Color::Yellow);
	begin.setPosition(300, 500);

	sf::Text start;
	start.setFont(font);
	start.setCharacterSize(50);
	start.setString("Andy Start");
	start.setColor(sf::Color::Red);
	start.setPosition(800, 50);

	sf::Text control1;
	control1.setFont(font);
	control1.setCharacterSize(40);
	control1.setString("Controlls:");
	control1.setColor(sf::Color::Red);
	control1.setPosition(800, 150);

	sf::Text control2;
	control2.setFont(font);
	control2.setCharacterSize(40);
	control2.setString("A for Left");
	control2.setColor(sf::Color::Red);
	control2.setPosition(800, 200);

	sf::Text control3;
	control3.setFont(font);
	control3.setCharacterSize(40);
	control3.setString("D for Right");
	control3.setColor(sf::Color::Red);
	control3.setPosition(800, 250);

	sf::Text control4;
	control4.setFont(font);
	control4.setCharacterSize(40);
	control4.setString("Space for jump");
	control4.setColor(sf::Color::Red);
	control4.setPosition(800, 300);

	while (window.isOpen())
	{

		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		window.clear();
		window.draw(hall);
		window.draw(door);
		window.draw(door2);
		window.draw(door3);
		window.draw(knob);
		window.draw(knob2);
		window.draw(knob3);
		window.draw(title);
		window.draw(command);
		window.display();


		while (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
		{

			door.setFillColor(sf::Color::White);
			window.clear();
			window.draw(hall);
			window.draw(door);
			window.draw(door2);
			window.draw(door3);
			window.draw(knob2);
			window.draw(knob3);
			window.draw(title);
			window.draw(begin);
			window.display();
			sleep_for(10ns);
			sleep_until(system_clock::now() + 2s);
			window.clear();
			window.draw(hall);
			window.draw(door);
			window.draw(door2);
			window.draw(door3);
			window.draw(knob2);
			window.draw(knob3);
			window.draw(title);
			window.draw(begin);
			window.draw(black1);
			window.draw(black2);
			window.draw(black3);
			window.draw(black4);
			window.draw(black5);
			window.draw(black6);
			window.draw(black7);
			window.draw(black8);
			window.display();
			sleep_until(system_clock::now() + .25s);
			window.clear();
			window.draw(hall);
			window.draw(door);
			window.draw(door2);
			window.draw(door3);
			window.draw(knob2);
			window.draw(knob3);
			window.draw(title);
			window.draw(begin);
			window.draw(black1);
			window.draw(black2);
			window.draw(black3);
			window.draw(black4);
			window.draw(black5);
			window.draw(black6);
			window.draw(black7);
			window.draw(black8);
			window.draw(black1a);
			window.draw(black2a);
			window.draw(black3a);
			window.draw(black4a);
			window.draw(black5a);
			window.draw(black6a);
			window.draw(black7a);
			window.draw(black8a);
			window.display();
			sleep_until(system_clock::now() + .25s);
			window.clear();
			window.draw(hall);
			window.draw(door);
			window.draw(door2);
			window.draw(door3);
			window.draw(knob2);
			window.draw(knob3);
			window.draw(title);
			window.draw(begin);
			window.draw(black1);
			window.draw(black2);
			window.draw(black3);
			window.draw(black4);
			window.draw(black5);
			window.draw(black6);
			window.draw(black7);
			window.draw(black8);
			window.draw(black1a);
			window.draw(black2a);
			window.draw(black3a);
			window.draw(black4a);
			window.draw(black5a);
			window.draw(black6a);
			window.draw(black7a);
			window.draw(black8a);
			window.draw(black1b);
			window.draw(black2b);
			window.draw(black3b);
			window.draw(black4b);
			window.draw(black5b);
			window.draw(black6b);
			window.draw(black7b);
			window.draw(black8b);
			window.display();
			sleep_until(system_clock::now() + .25s);
			window.clear();
			window.draw(hall);
			window.draw(door);
			window.draw(door2);
			window.draw(door3);
			window.draw(knob2);
			window.draw(knob3);
			window.draw(title);
			window.draw(begin);
			window.draw(black1);
			window.draw(black2);
			window.draw(black3);
			window.draw(black4);
			window.draw(black5);
			window.draw(black6);
			window.draw(black7);
			window.draw(black8);
			window.draw(black1a);
			window.draw(black2a);
			window.draw(black3a);
			window.draw(black4a);
			window.draw(black5a);
			window.draw(black6a);
			window.draw(black7a);
			window.draw(black8a);
			window.draw(black1b);
			window.draw(black2b);
			window.draw(black3b);
			window.draw(black4b);
			window.draw(black5b);
			window.draw(black6b);
			window.draw(black7b);
			window.draw(black8b);
			window.draw(black1c);
			window.draw(black2c);
			window.draw(black3c);
			window.draw(black4c);
			window.draw(black5c);
			window.draw(black6c);
			window.draw(black7c);
			window.draw(black8c);
			window.display();
			sleep_until(system_clock::now() + 1s);
			window.clear();
			window.draw(black1);
			window.draw(black2);
			window.draw(black3);
			window.draw(black4);
			window.draw(black5);
			window.draw(black6);
			window.draw(black7);
			window.draw(black8);
			window.draw(black1a);
			window.draw(black2a);
			window.draw(black3a);
			window.draw(black4a);
			window.draw(black5a);
			window.draw(black6a);
			window.draw(black7a);
			window.draw(black8a);
			window.draw(black1b);
			window.draw(black2b);
			window.draw(black3b);
			window.draw(black4b);
			window.draw(black5b);
			window.draw(black6b);
			window.draw(black7b);
			window.draw(black8b);
			window.draw(black1c);
			window.draw(black2c);
			window.draw(black3c);
			window.draw(black4c);
			window.draw(black5c);
			window.draw(black6c);
			window.draw(black7c);
			window.draw(black8c);
			window.draw(start);
			window.draw(control1);
			window.draw(control2);
			window.draw(control3);
			window.draw(control4);
			window.display();
			sleep_until(system_clock::now() + 2s);
			window.close();
			//begin the level
		}
	}


}

int main(void) {


		//runs start screen animation
		startScreen();

		//the level takes a while to load the sound file so i added text on command prompt
		system("cls");
		cout << "Loading...\nit takes a bit of time to load" << endl;
		cout << endl;
		cout << "in case you missed the controlls:" << endl;
		cout << "A-Move Left\nD-Move Right\nSpace-Jump" << endl;
		cout << endl;
		cout << "Helpful Hint: jumping on top of enemies gets you 2 points while coins only give you one" << endl;




		bool chat = false;
		int * rec;//0=score,1=win/loss,2=time in frames,3-lives
		level1 l1;
		gameOver GO;
		winScreen WS;


		//runs level1
		rec = l1.run();

		//if player won level goes to win screen
		if (rec[1] == 1) {
			chat = WS.run(rec[0], rec[2], rec[3]);

		}

		//if player loses level takes player to game over screen
		if (rec[1] == 0) {
			chat = GO.run();
		}


		//if player decides to try the chat network



		//Some of chat Code is attributed to sloan Kelly from youtube
		if (chat) {
			//instructions on how to start chat 
			system("cls");
			cout << "our chat box only works over 1 computer" << endl;
			cout << "Instructions:" << endl;
			cout << "1.open up 2 putty windows" << endl;
			cout << "2.type\"127.0.0.1\" into the ip address and \"54000\" into the port set conection type to \"raw\"" << endl;
			cout << "3. hit the open button and chat with yourself" << endl;

			//below here is chat code- Marco


		// Initialze winsock
			WSADATA wsData;
			WORD ver = MAKEWORD(2, 2);

			int wsOk = WSAStartup(ver, &wsData);
			//WSAStartup(ver, &wsData);
			if (wsOk != 0)
			{
				cerr << "Can't Initialize winsock! Quitting" << endl;
				return 0;
			}

			// Create a socket
			SOCKET listening = socket(AF_INET, SOCK_STREAM, 0);
			if (listening == INVALID_SOCKET)
			{
				cerr << "Can't create a socket! Quitting" << endl;
				return 0;
			}

			// Bind the ip address and port to a socket
			sockaddr_in hint;
			hint.sin_family = AF_INET;
			hint.sin_port = htons(54000);
			hint.sin_addr.S_un.S_addr = INADDR_ANY; // Could also use inet_pton .... 

			bind(listening, (sockaddr*)&hint, sizeof(hint));

			// Tell Winsock the socket is for listening 
			listen(listening, SOMAXCONN);

			// Create the master file descriptor set and zero it
			fd_set master;
			FD_ZERO(&master);
			FD_SET(listening, &master);

			// this will be changed by the \quit command (see below, bonus not in video!)
			bool running = true;

			while (running)
			{

				fd_set copy = master;

				// See who's talking to us
				int socketCount = select(0, &copy, nullptr, nullptr, nullptr);

				// Loop through all the current connections / potential connect
				for (int i = 0; i < socketCount; i++)
				{
					// Makes things easy for us doing this assignment
					SOCKET sock = copy.fd_array[i];


					// Is it an inbound communication?
					if (sock == listening)
					{
						// Accept a new connection
						SOCKET client = accept(listening, nullptr, nullptr);

						// Add the new connection to the list of connected clients
						FD_SET(client, &master);

						// Send a welcome message to the connected client
						string welcomeMsg = "Welcome to the Chat Server!\r\n";
						send(client, welcomeMsg.c_str(), welcomeMsg.size() + 1, 0);
					}
					else // It's an inbound message
					{
						char buf[4096];
						ZeroMemory(buf, 4096);

						// Receive message
						int bytesIn = recv(sock, buf, 4096, 0);
						if (bytesIn <= 0)
						{
							// Drop the client
							closesocket(sock);
							FD_CLR(sock, &master);
						}
						else
						{
							// Check to see if it's a command. \quit kills the server
							if (buf[0] == '\\')
							{
								// Is the command quit? 
								string cmd = string(buf, bytesIn);
								if (cmd == "\\quit")
								{
									running = false;
									break;
								}

								// Unknown command
								continue;
							}

							// Send message to other clients, and definiately NOT the listening socket

							for (int i = 0; i < master.fd_count; i++)
							{
								SOCKET outSock = master.fd_array[i];
								if (outSock != listening && outSock != sock)
								{
									ostringstream ss;
									ss << "SOCKET #" << sock << ": " << buf << "\r\n";
									string strOut = ss.str();

									send(outSock, strOut.c_str(), strOut.size() + 1, 0);
								}
							}
						}
					}
				}
			}

			// Remove the listening socket from the master file descriptor set and close it
			// to prevent anyone else trying to connect.
			FD_CLR(listening, &master);
			closesocket(listening);

			// Message to let users know what's happening.
			string msg = "Server is shutting down. Goodbye\r\n";

			while (master.fd_count > 0)
			{
				// Get the socket number
				SOCKET sock = master.fd_array[0];

				// Send the goodbye message
				send(sock, msg.c_str(), msg.size() + 1, 0);

				// Remove it from the master file list and close the socket
				FD_CLR(sock, &master);
				closesocket(sock);
			}

			// Cleanup winsock
			WSACleanup();

		}

	}

