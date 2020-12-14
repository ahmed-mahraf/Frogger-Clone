#pragma once

#include <SFML\Graphics.hpp>

class Road : public sf::Drawable
{
private:

public:
	Road();

	sf::RectangleShape a_bodyShape[6]; // Drawing array of the variable.
	sf::Texture textureRoad; // Adding texture for the Road.

	void draw(sf::RenderTarget& target, sf::RenderStates states) const; // Drawing function - To draw the Roads to Road class. Road class is drawn in game, game is drawn into window.
	~Road();
};