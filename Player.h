//Player.h

#ifndef PLAYER_H
#define PLAYER_H

#include "Ship.h"
#include <string>
#include <fstream>
#include <iostream>

class Player
{

	public:
		Player(int ships);
		void anchorShips(int ships);
		void showWaters();

	private:
		int m_ships;
		char** playerGrid;

};
#endif
