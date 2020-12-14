#pragma once

#include <SFML/Graphics.hpp>

class Frog : public sf::Drawable
{
private:

public:
	Frog();

	sf::RectangleShape m_bodyShape; // Declares the shape of the Frog.
	sf::FloatRect FrogHitbox; // Declares the Hitbox of the Frog.
	sf::Texture frogTexture; // Texture referenced from https://nathanrad.wordpress.com/2014/12/22/atari-2600-classics/

	void update(float fTimeElapsed); // Adds an update function. 
	void draw(sf::RenderTarget& target, sf::RenderStates states) const; // Drawing function - To draw the Frog to Frog class. Frog class is drawn in game, game is drawn into window.
	void onStart(); // Adds the onStart function to set frog position.

	// Movement Of Frog is being declared.

	void Up();
	void Down();
	void Left();
	void Right();

	void getHitbox(); // Declares the function to get Hitbox bounds.
};