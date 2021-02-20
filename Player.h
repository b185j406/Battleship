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
		int colToInt(std::string column);
		void anchorShips(int length);
		void showWaters();
		bool validateCol(std::string column);
		bool validateRow(int row);
		bool validatePosition(int row, std::string col, std::string direction, int size);
		std::string intToString(int num);

		void checkGrid(int shipCoords[]);

	private:
		int m_ships;
		char** playerGrid;

};
#endif
