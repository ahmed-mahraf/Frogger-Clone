#include <SFML/Graphics.hpp> // Adds SFML libraries
#include <iostream> // Not good practice but avoids using std:: alot

#include "Game.h"  // Includes GAME_H into the Main file.

using namespace std;

/*
	Mahraf Ahmed (Frogger Coursework)

	----------
	References
	----------

	Textures:

	Frog - https://nathanrad.files.wordpress.com/2014/12/pressentation-frog.png?w=400
	Start & Middle (Concrete) - https://i.imgur.com/TWeZQd9.png
	Road - https://tristanmacdonald.files.wordpress.com/2013/09/road.gif
	Finish - https://images-na.ssl-images-amazon.com/images/I/31eX53WySRL.jpg
	Car - https://vignette.wikia.nocookie.net/gtawiki/images/0/0d/Beamer-GTA2.png/revision/latest?cb=20091114132517
	Truck - https://vignette.wikia.nocookie.net/gtawiki/images/d/df/BoxTruck-GTA2.png/revision/latest?cb=20091114132923

	Work Influence:

	SFML Tutorials (SFML 2.4 For Beginners - Hilze Vonck) - https://goo.gl/jubdhm
	Previous Students Work - https://github.com/HotPlasma/Frogger

	Font: https://www.dafont.com/minecraft.font

*/

int main()
{
	
	sf::RenderWindow window(sf::VideoMode(800, 950), "Frogger"); // Renders the Window, sets the Window resolution(800 x 950) and the window is names "Frogger".

	sf::Clock timer; // Timer for Framerate
	float fFrameTime = 1.0f / 60.0f; // Sets the framerate to 60fps
	float fElapsedTime;

	sf::Event event;

	Game GameManager; // To access game.cpp


	while (window.isOpen())
	{
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed) // Event type for Closing a window.
			{
				window.close(); 
			}

			if (event.type == sf::Event::KeyPressed) // Event type for Movement.
			{
				GameManager.processKeyPress(event.key.code);

			}
		} // Event loop

		fElapsedTime = timer.getElapsedTime().asSeconds();
		if (fElapsedTime > fFrameTime)
		{
			GameManager.update(fElapsedTime); // Displays the framerates.

			if (GameManager.onFinishLineCollision() || GameManager.Lives()) // If player lives = 0 or if player crosses finish line, then it closes the window.
			{
				window.close();
			}

			timer.restart();
		}

		// Drawing 101

		window.clear();    // Clears the window.

		window.draw(GameManager); // Draws the whole game. 

		window.display();  // Displays the game.

	} // main loop
}