#pragma once

#include <SFML\Graphics.hpp>

class Start : public sf::Drawable
{
private:

public:
	Start();

	sf::RectangleShape m_bodyShape; // Drawing array of the variable.
	sf::Texture startTexture; // Adding texture for the Start.
	sf::FloatRect StartHitbox; //Adding a hitbox to the Starts

	void draw(sf::RenderTarget& target, sf::RenderStates states) const; // Drawing function - To draw the Starts to Start class. Start class is drawn in game, game is drawn into window.
	~Start();
};
#pragma once