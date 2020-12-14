#include "Middle.h"  // Includes MIDDLE_H into the cpp file.

Middle::Middle()
{
	middleTexture.loadFromFile(".\\assets\\textures\\Concrete.PNG"); // Loads up the Concrete texture for the Start point

	m_bodyShape.setSize(sf::Vector2f(800.0f, 100.0f)); // Drawing the Body - setting the size.
	m_bodyShape.setOrigin(m_bodyShape.getSize().x / 2.0f, m_bodyShape.getSize().y / 2.0f); // Sets the center point of the object
	m_bodyShape.setPosition(400.0f, 450.0f); m_bodyShape.setTexture(&middleTexture); // References the texture using a pointer
}

void Middle::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(m_bodyShape); // Draws the Middle class
}

Middle::~Middle()
{
}