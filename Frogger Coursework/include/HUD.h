#pragma once

#include <SFML\Graphics.hpp>

class HUD : public sf::Text // Text is for GUI. It is not a Drawable.
{
private:
	sf::Font m_HUDFont; // Declares the font from SFML Libraries
public:
	HUD();
	void draw(sf::RenderTarget& target, sf::RenderStates states) const; // Drawing function - Draws HUD class to Game, Game to main.

	sf::Text HUD_Lives; // Declares HUD Lives as Text
};