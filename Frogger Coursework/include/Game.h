#pragma once
#include <SFML/Graphics.hpp>

// Including the header files to draw in game.

#include "Frog.h"
#include "Start.h"
#include "Road.h"
#include "Middle.h"
#include "Finish.h"
#include "Truck.h"
#include "Car.h"
#include "HUD.h"

class Game : public sf::Drawable
{
private:
	Frog m_Frog; // Sets the Frog class as a Function.
	
	// Lanes //
	
	Start m_Start; // Sets the Start class as a Function.
	Middle m_Middle; // Sets the Middle class as a Function.
	Finish m_Finish; // Sets the Finish class as a Function.
	Road m_Road; // Sets the Road class as a Function.
	
	// Cars //
	
	Truck m_Truck; // Sets the Truck class as a Function.
	Car m_Car; // Sets the Frog class as a Function.

	// User Interface //

	HUD m_HUD; // Sets the HUD class as a Function.

	int iLives = 3; // Sets the Lives to 3, this is a must; matching the criteria.

public:
	Game();
	void update(float fElapsedTime); // Adds an update function 
	void draw(sf::RenderTarget& target, sf::RenderStates states) const; // adds a draw function to draw the game setting.
	void processKeyPress(sf::Keyboard::Key keyCode);// adds a function to move
	void onCollision(); // adds a function to detect collision

	bool onFinishLineCollision(); // adds a function to detect collision on the finish line
	bool Lives(); // Adds the function to determine lives
};
