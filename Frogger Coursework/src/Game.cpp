#include "game.h"  // Includes GAME_H into the cpp file.

Game::Game()
{
}

void Game::update(float fElapsedTime)
{
	
	m_Frog.getHitbox(); // Gets hitbox from FROG_H into the game.cpp

	m_Truck.TruckMove(); // Moves all the Trucks from TRUCK_H into the game.cpp
	m_Truck.getHitbox(); // gets Hitbox from CAR_H into the game.cpp

	m_Car.CarMove(); // Moves all the cars from CAR_H into the game.cpp
	m_Car.getHitbox(); // gets Hitbox from CAR_H into the game.cpp

	

	m_HUD.HUD_Lives.setString("Lives: " + std::to_string(iLives)); // Draws the Lives String to show lives on the game.
	onCollision(); // onCollision function is recurring just in case collision happens.

}

void Game::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(m_Start);
	target.draw(m_Middle);
	target.draw(m_Road);
	target.draw(m_Finish); // Draws the Finish Line from FINISH_H into the game.cpp.

	target.draw(m_Truck); // Draws the Frog from TRUCK_H into the game.cpp.
	target.draw(m_Car); // Draws the Frog from CAR_H into the game.cpp.

	target.draw(m_Frog); // Draws the Frog from FROG_H into the game.cpp.

	target.draw(m_HUD); // Draws the HUD from HUD_H into the game.cpp.
}

void Game::processKeyPress(sf::Keyboard::Key keyCode) // The Keycode to move the frogs position using Up, Down, Left, Right arrows
{
	if (keyCode == sf::Keyboard::Up)
	{
		m_Frog.Up();
	}

	if (keyCode == sf::Keyboard::Down)
	{
		m_Frog.Down();
	}

	if (keyCode == sf::Keyboard::Left)
	{
		m_Frog.Left();
	}

	if (keyCode == sf::Keyboard::Right)
	{
		m_Frog.Right();
	}
}


void Game::onCollision()
{
	for (int i = 0; i < 16; i++) // 16 Vehicles to check if collision is happening
	{
		if (m_Frog.FrogHitbox.intersects(m_Car.CarHitbox[i]) || m_Frog.FrogHitbox.intersects(m_Truck.TruckHitbox[i])) // If Vehicles intersects with frog
		{
			m_Frog.onStart(); // Resets Frog Position
			iLives--; // Takes away Lives by 1
		}
	}
}

bool Game::onFinishLineCollision()
{
	
	if (m_Frog.FrogHitbox.intersects(m_Finish.FinishHitbox) && m_Frog.m_bodyShape.getPosition().y == 50.0f)
	{
		return true; // Stops the game
	}
	else
	{
		return false; // Carry on with the game
	}
}

bool Game::Lives()
{
	if (iLives == 0)
	{
		return true; // Stops the game
	}
	else
	{
		return false; // Carry on with the game
	}
}
