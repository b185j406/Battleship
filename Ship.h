//Ship.h

#ifndef SHIP_H
#define SHIP_H
#include <string>
#include <fstream>
#include <iostream>

class Ship
{

	public:


		Ship(std::string shipStart, std::string shipOrientation, int length);

		bool isDestroyed(); //returns true if shipIntegrity is zero

		bool isHit(int row, char col);

		void shipDocks();

	private:
		int m_shipLength = 0;
		int m_hullIntegrity = 0;
		std::string m_shipHead;
		std::string m_shipDirection;
		std::string m_shipCoordinates;

};
#endif
