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
		int colToInt(char column);
		void anchorShips(int length);
		void showWaters();
		bool validateCol(char column);
		bool validateRow(int row);
		bool validatePosition(int row, char col, std::string direction, int size);
		std::string intToString(int num);

		void checkGrid(std::string shipCoords);

	private:
		int m_ships;
		char** playerGrid;
		Ship shipArray[5];//max number of ships, allows us to have a location for each ship in memory

};
#endif
