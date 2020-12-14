#include "Road.h"  // Includes ROAD_H into the cpp file.

Road::Road()
{
	textureRoad.loadFromFile(".\\assets\\textures\\Road.PNG");

	for (int i = 0; i < 6; i++) // 6 roads are used
	{
		a_bodyShape[i].setSize(sf::Vector2f(800.0f, 100.0f)); // Drawing the Body - setting the size.
		a_bodyShape[i].setOrigin(a_bodyShape[i].getSize().x / 2.0f, a_bodyShape[i].getSize().y / 2.0f); // Sets the center point of the object
		a_bodyShape[i].setTexture(&textureRoad);
	}

	// Sets the Position of the roads
	a_bodyShape[0].setPosition(400.0f, 750.0f);
	a_bodyShape[1].setPosition(400.0f, 650.0f);
	a_bodyShape[2].setPosition(400.0f, 550.0f);

	// 450.0f (y axis) is Sidewalk

	a_bodyShape[3].setPosition(400.0f, 350.0f);
	a_bodyShape[4].setPosition(400.0f, 250.0f);
	a_bodyShape[5].setPosition(400.0f, 150.0f);

}

void Road::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	for (int i = 0; i < 6; i++)
	{
		target.draw(a_bodyShape[i]); // Draws the Road class
	}

}

Road::~Road()
{
}