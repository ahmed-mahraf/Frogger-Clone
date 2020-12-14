#pragma once

#include <SFML\Graphics.hpp>

class Finish : public sf::Drawable
{
private:

public:
	Finish();

	sf::RectangleShape m_bodyShape; // Drawing array of the variable.
	sf::Texture finishTexture; // Adding texture for the finish Line.
	sf::FloatRect FinishHitbox; //Adding a hitbox to the finish Line.

	void draw(sf::RenderTarget& target, sf::RenderStates states) const; // Drawing function - To draw the finishLines to finishLine class. finishLine class is drawn in game, game is drawn into window.
	~Finish();
};
