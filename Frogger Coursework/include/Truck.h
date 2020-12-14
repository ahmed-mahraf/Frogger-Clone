#pragma once

#include <SFML\Graphics.hpp>

class Truck : public sf::Drawable
{
private:

public:
	Truck();

	sf::RectangleShape a_bodyShape[12]; // Drawing array of the variable.
	sf::Texture truckTexture; // Adding texture for the Truck.
	sf::FloatRect TruckHitbox[12]; //Adding a hitbox to the Trucks

	void draw(sf::RenderTarget& target, sf::RenderStates states) const; // Drawing function - To draw the Trucks to Truck class. Truck class is drawn in game, game is drawn into window.
	void TruckMove(); // Function to move Trucks
	void getHitbox(); // Function to detect collision
	~Truck();
};