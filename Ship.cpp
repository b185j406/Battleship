//Ship.cpp

#include "Ship.h"
#include <iostream>


Ship::Ship(std::string shipStart, std::string shipOrientation, int length){ //constructor
	m_shipLength = length;
	m_hullIntegrity = length;
	m_shipHead = shipStart;
	m_shipDirection = shipOrientation;
}

void Ship::createArray(){

	//Need to read the m_shipHead to know where to start
	//Need to read m_shipDirection to know whether to go LEFT or DOWN

	//Coordinates are validated in the player class. Therefore this function
	//And the valid coordinate function are pretty similar. If one is implemented
	//The other should be able to borrow most of the code.

	//The issue with createArray is that you are handed the starting position, the direction, and the length.
	//From there, you need to infer what coordinates to add next.

	//For example, I am using createArray() on a ship that has its head at A1, its direction Vertical, and its length is 5.
	//This function would have been validated by the player function, so you know the directions you are going are valid.
	//Therefore, the array would be [A1, A2, A3, A4, A5, 0] since the ship array is already 6 elements long.


}

bool Ship::isDestroyed(){
	if(m_hullIntegrity == 0){
		return(true);
	}
	else{
		return(false);
	}
}

bool Ship::isHit(int row, char col){

	return(true);
}


void Ship::shipDocks(){
	std::cout << "\nThe head of this ship is located at : " << m_shipHead << "\n";
	std::cout << "The orientation of this ship is : " << m_shipDirection << "\n";
	std::cout << "The length of this ship is :" << m_shipLength << "\n";

	//
	for(int i = 0; i < m_shipLength; i++){

	}


}
