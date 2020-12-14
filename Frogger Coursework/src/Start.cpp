#include "Start.h"  // Includes START_H into the cpp file.

Start::Start()
{
	startTexture.loadFromFile(".\\assets\\textures\\Concrete.PNG"); // Loads up the Concrete texture for the Start point

	m_bodyShape.setSize(sf::Vector2f(800.0f, 100.0f)); // Drawing the Body - setting the size.
	m_bodyShape.setOrigin(m_bodyShape.getSize().x / 2.0f, m_bodyShape.getSize().y / 2.0f); // Sets the center point of the object
	m_bodyShape.setPosition(400.0f, 850.0f); // Sets the Position of the Start.
	m_bodyShape.setTexture(&startTexture); // References the texture using a pointer
}

void Start::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(m_bodyShape); // Draws the Start class
}

Start::~Start()
{
}