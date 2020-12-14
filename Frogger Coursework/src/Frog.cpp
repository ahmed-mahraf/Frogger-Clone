#include "Frog.h" // Includes FROG_H into the cpp file.

Frog::Frog()
{
	frogTexture.loadFromFile(".\\assets\\textures\\Frog.PNG"); // Loads up the texture of the frog

	m_bodyShape.setSize(sf::Vector2f(50.0f, 50.0f)); // Drawing the Body - setting the size.
	m_bodyShape.setOrigin(m_bodyShape.getSize().x / 2.0f, m_bodyShape.getSize().y / 2.0f); // Sets the center point of the object
	m_bodyShape.setPosition(400.0f, 850.0f); // Sets the body position
	m_bodyShape.setTexture(&frogTexture); // References the texture using a pointer
	FrogHitbox = m_bodyShape.getGlobalBounds(); // Gets the Bounds of the frog.
}

void Frog::update(float fTimeElapsed) 
{
	// Updates the frog's frame.
}

void Frog::draw(sf::RenderTarget& target, sf::RenderStates states) const {
	target.draw(m_bodyShape); // This is called from FROG_H - Draw the rectangle.
}

void Frog::onStart()
{
	m_bodyShape.setPosition(400.0f, 850.0f); // Sets the position of frog when the game is started
}

void Frog::Up() {
	/* -- If Up pressed, Go Up -- */

	if (m_bodyShape.getPosition().y >= 100) // If Statement to avoid it hitting outside the map.
	{
		m_bodyShape.move(0.0f, -50.0f);
		m_bodyShape.setRotation(0.0f); // Flips sprite to the Front.
	}
}
void Frog::Down() {
	/* -- If Down pressed, Go Down -- */

	if (m_bodyShape.getPosition().y <= 800) // If Statement to avoid it hitting outside the map.
	{
		m_bodyShape.move(0.0f, 50.0f);
		m_bodyShape.setRotation(180.0f); // Flips sprite to the Front.
	}
}
void Frog::Left() {
	/* -- If Left pressed, Go Left -- */

	if (m_bodyShape.getPosition().x >= 100) // If Statement to avoid it hitting outside the map.
	{
		m_bodyShape.move(-50.0f, 0.0f);
		m_bodyShape.setRotation(270.0f); // Flips sprite to the Front.
	}
}
void Frog::Right() {
	/* -- If Right pressed, Go Right -- */

	if (m_bodyShape.getPosition().x <= 700) // If Statement to avoid it hitting outside the map.
	{
		m_bodyShape.move(50.0f, 0.0f);
		m_bodyShape.setRotation(90.0f); // Flips sprite to the Front.
	}
}

void Frog::getHitbox()
{
	FrogHitbox = m_bodyShape.getGlobalBounds();  // Gets the Bounds of the frog.
}