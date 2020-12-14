#include "Car.h"  // Includes CAR_H into the cpp file.

Car::Car()
{
	carTexture.loadFromFile(".\\assets\\textures\\car.PNG");  // Loads the texture for cars

	for (int i = 0; i < 4; i++)  // Loop number of times per car.
	{
		a_bodyShape[i].setSize(sf::Vector2f(100.0f, 50.0f)); // Drawing the Body - setting the size.
		a_bodyShape[i].setOrigin(a_bodyShape[i].getSize().x / 2.0f, a_bodyShape[i].getSize().y / 2.0f); // Sets the center point of the object
		a_bodyShape[i].setTexture(&carTexture);
	}

	a_bodyShape[0].setPosition(700.0f, 650.0f); // Sets the body position MOVE RIGHT
	a_bodyShape[1].setPosition(250.0f, 250.0f); // Sets the body position
	a_bodyShape[2].setPosition(250.0f, 650.0f); // Sets the body position
	a_bodyShape[3].setPosition(500.0f, 250.0f); // Sets the body position
}

void Car::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	for (int i = 0; i < 4; i++)  // Loop number of times per car.
	{
		target.draw(a_bodyShape[i]); // Draws the car class
	}
}

void Car::CarMove()
{
	float MoveR = -7.5f;  // Declares the speed for the Trucks

	// Moves the Cars to the Right

	a_bodyShape[0].move(MoveR, 0.0f);
	a_bodyShape[1].move(MoveR, 0.0f);
	a_bodyShape[2].move(MoveR, 0.0f);
	a_bodyShape[3].move(MoveR, 0.0f);

	/*
		This section loops the Cars so that the cars can be repeated.
	*/

	for (int i = 0; i < 4; i++)
	{
		if (a_bodyShape[i].getPosition().x >= 850) // Cars going Left
		{
			a_bodyShape[i].setPosition(-50.0f, a_bodyShape[i].getPosition().y);
		}

		else if (a_bodyShape[i].getPosition().x <= -50) // Cars going right
		{
			a_bodyShape[i].setPosition(850.0f, a_bodyShape[i].getPosition().y);
		}

	}
}

void Car::getHitbox()
{
	for (int i = 0; i < 4; i++)
	{
		CarHitbox[i] = a_bodyShape[i].getGlobalBounds(); // Gets the bounds of the car and creates its hitbox.
	}
}

Car::~Car()
{
}