#include "Finish.h"  // Includes FINISH_H into the cpp file.

Finish::Finish()
{
	finishTexture.loadFromFile(".\\assets\\textures\\Finish.PNG"); // Loads up the Concrete texture for the Start point

	m_bodyShape.setSize(sf::Vector2f(800.0f, 100.0f)); // Drawing the Body - setting the size.
	m_bodyShape.setOrigin(m_bodyShape.getSize().x / 2.0f, m_bodyShape.getSize().y / 2.0f); // Sets the center point of the object
	m_bodyShape.setPosition(400.0f, 50.0f); // Sets postion of the Finish line
	m_bodyShape.setTexture(&finishTexture); // References the texture using a pointer

	FinishHitbox = m_bodyShape.getGlobalBounds(); // Gets the bounds of the Finish lines hitbox
}

void Finish::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(m_bodyShape); // Draws the Finish class
}

Finish::~Finish()
{
}