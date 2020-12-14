#pragma once

#include <SFML\Graphics.hpp>

class Middle : public sf::Drawable
{
private:

public:
	Middle();

	sf::RectangleShape m_bodyShape; // Drawing array of the variable.
	sf::Texture middleTexture; // Adding texture for the Middle.
	sf::FloatRect MiddleHitbox; // Adding a hitbox to the Middle.

	void draw(sf::RenderTarget& target, sf::RenderStates states) const; // Drawing function - To draw the Middles to Middle class. Middle class is drawn in game, game is drawn into window.
	~Middle();
};