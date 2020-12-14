#include "HUD.h"  // Includes HUD_H into the cpp file.

HUD::HUD()
{
	m_HUDFont.loadFromFile(".\\assets\\fonts\\8bit.TTF"); // Loads font
	HUD_Lives.setFont(m_HUDFont); // Sets the font
	HUD_Lives.setCharacterSize(50); // Sets the size of font
	HUD_Lives.setPosition(600.0f, 887.5f); // Sets the position of HUD
	HUD_Lives.setFillColor(sf::Color::White); // Sets the color of HUD
}

void HUD::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(HUD_Lives); // Draws the HUD
}