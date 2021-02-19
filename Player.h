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
		void anchorShips(int length);
		void showWaters();
		bool validateCol(std::string column);
		bool validateRow(int row);
		std::string intToString(int num);

	private:
		int m_ships;
		char** playerGrid;

};
#endif
