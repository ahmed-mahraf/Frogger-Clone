#pragma once

#include <SFML\Graphics.hpp>

class Car : public sf::Drawable
{
private:

public:
	Car();

	sf::RectangleShape a_bodyShape[4]; // Drawing array of the variable.
	sf::Texture carTexture; // Adding texture for the car.
	sf::FloatRect CarHitbox[4]; //Adding a hitbox to the cars

	void draw(sf::RenderTarget& target, sf::RenderStates states) const; // Drawing function - To draw the cars to car class. Car class is drawn in game, game is drawn into window.
	void CarMove(); // Function to move cars
	void getHitbox(); // Function to detect collision
	~Car();
};
