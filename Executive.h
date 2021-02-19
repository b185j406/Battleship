//Executive.h

#ifndef EXECUTIVE_H
#define EXECUTIVE_H

#include "Player.h"
#include <string>
#include <fstream>
#include <iostream>

class Executive
{

	public:
		Executive();
		~Executive();

		void run();
		void printPlayerOneGrid();
		void printPlayerTwoGrid();
		void fillGrids();

	private:
		int** playerOneGrid;
		int** playerTwoGrid;
};
#endif
