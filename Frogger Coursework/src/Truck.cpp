#include "Truck.h"  // Includes TRUCK_H into the cpp file.

Truck::Truck()
{
	truckTexture.loadFromFile(".\\assets\\textures\\Truck.PNG"); // Loads the texture for Trucks

	for (int i = 0; i < 12; i++)  // Loop number of times per Truck.
	{
		a_bodyShape[i].setSize(sf::Vector2f(125.0f, 50.0f)); // Drawing the Body - setting the size.
		a_bodyShape[i].setOrigin(a_bodyShape[i].getSize().x / 2.0f, a_bodyShape[i].getSize().y / 2.0f); // Sets the center point of the object
		a_bodyShape[i].setTexture(&truckTexture);
	}

	/*
		Setting all the Trucks positions
	*/

	a_bodyShape[0].setPosition(400.0f, 750.0f); 
	a_bodyShape[1].setPosition(140.0f, 550.0f); 
	a_bodyShape[2].setPosition(650.0f, 350.0f); 
	a_bodyShape[3].setPosition(750.0f, 150.0f); 

	a_bodyShape[4].setPosition(200.0f, 750.0f); 
	a_bodyShape[5].setPosition(350.0f, 550.0f);
	a_bodyShape[6].setPosition(450.0f, 350.0f);
	a_bodyShape[7].setPosition(150.0f, 150.0f);

	a_bodyShape[8].setPosition(750.0f, 750.0f);
	a_bodyShape[9].setPosition(600.0f, 550.0f);
	a_bodyShape[10].setPosition(100.0f, 350.0f);
	a_bodyShape[11].setPosition(450.0f, 150.0f);

	// 650 & 250 (y axis) are for Cars.
}

void Truck::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	for (int i = 0; i < 12; i++)  // Loop number of times per Truck.
	{
		target.draw(a_bodyShape[i]); // Draws the Truck class
	}
}

void Truck::TruckMove()
{
	float MoveL = 5.0f; // Declares the speed for the Trucks

	// Moves the Trucks to the Left

	a_bodyShape[0].move(MoveL, 0.0f);
	a_bodyShape[1].move(MoveL, 0.0f);
	a_bodyShape[2].move(MoveL, 0.0f);
	a_bodyShape[3].move(MoveL, 0.0f);

	a_bodyShape[4].move(MoveL, 0.0f);
	a_bodyShape[5].move(MoveL, 0.0f);
	a_bodyShape[6].move(MoveL, 0.0f);
	a_bodyShape[7].move(MoveL, 0.0f);

	a_bodyShape[8].move(MoveL, 0.0f);
	a_bodyShape[9].move(MoveL, 0.0f);
	a_bodyShape[10].move(MoveL, 0.0f);
	a_bodyShape[11].move(MoveL, 0.0f);

	/*
		This section loops the Trucks so that the Trucks can be repeated.
	*/

	for (int i = 0; i < 12; i++)
	{
		if (a_bodyShape[i].getPosition().x >= 850) // Trucks that go to the Left
		{
			a_bodyShape[i].setPosition(-50.0f, a_bodyShape[i].getPosition().y); // Restarts from right
		}

		else if (a_bodyShape[i].getPosition().x <= -50) // Trucks that go to the Right
		{
			a_bodyShape[i].setPosition(850.0f, a_bodyShape[i].getPosition().y); // Restarts from Left
		}

	}
}

void Truck::getHitbox()
{
	for (int i = 0; i < 12; i++)
	{
		TruckHitbox[i] = a_bodyShape[i].getGlobalBounds(); // Gets the bounds of the Truck and creates its hitbox.
	}
}

Truck::~Truck()
{
}