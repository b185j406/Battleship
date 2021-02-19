//Ship.cpp

#include "Ship.h"
#include <iostream>


Ship::Ship(std::string shipStart, std::string shipOrientation, int length){ //constructor
	m_shipLength = length;
	m_hullIntegrity = length;
	m_shipHead = shipStart;
	m_shipDirection = shipOrientation;
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
//	if(m_frontRow == m_backRow){ //The ship is horizontal
	//	for(int i = 0; i < m_shipLength; i++){
		//	if(row == m_frontRow)
		//}
//	}
//	else if(m_frontCol == m_backCol){ //the ship is vertical

//	}

//	}
	return(true);
}
