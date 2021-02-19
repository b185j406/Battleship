//Player.cpp

#include "Player.h"
#include <iostream>

Player::Player(int ships){
	m_ships = ships;
	playerGrid = new char*[10];
	for(int i = 0; i < 10; i++){
		playerGrid[i] = new char[10];
	}
	for(int j = 0; j < 10; j++){
		for(int k = 0; k < 10; k++){
			playerGrid[j][k] = 'O';
		}
	}
}

void Player::showWaters(){
	std::cout << "+---------------------------------------------Player Board----------------------------------------------+\n";
	std::cout << "|\t\t\tA\tB\tC\tD\tE\tF\tG\tH\tI\tJ\t|\n";
	std::cout << "+---------------+---------------------------------------------------------------------------------------+\n";
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
			if(j == 0){
				std::cout << "|" << "\t" << i+1 << "\t" << "|" << "\t" << playerGrid[i][j] << "\t";
			}
			else if(j == 9){
				std::cout << playerGrid[i][j] << "\t" << "|";
			}
			else{
				std::cout << playerGrid[i][j] << "\t";
			}
		}
		std::cout << "\n";
	}
	std::cout << "+---------------+---------------------------------------------------------------------------------------+\n";
}

void Player::anchorShips(int ships){
	char shipStarterCol = 0;
	int shipStarterRow = 0;
	std::string shipLocation;
	std::string shipPlacement;

	std::cout << "\nWhat orientation would you like the ship to be placed in?\n";
	std::cout << "Vertical or Horizontal? (V / H):\n";
	std::cin >> shipPlacement;
	while(shipPlacement != "V" && shipPlacement != "v" && shipPlacement != "H" && shipPlacement != "h")// fails on anything thats not a V or a v or a H or a h
		std::cin.clear();
		std::cin.ignore(100, '\n');
		std::cout << "Vertical or Horizontal? (V / H):\n";
		std::cin >> shipPlacement;
	}

	//NOTE TO JAKE IN THE FUTURE

	//NEED TO VALIDATE THE v V or H h FOR PLACING THE SHIP. NEED TO GET VALID INFO BEFORE WE CAN PASS TO SHIP/PLAYER STUFF!!!








	/*
	std::cout << "\nWhere would you like to place the head of the ship? \n";
	std::cout << "Please input a valid column (A - J): ";
	std::cin >> shipStarterCol;
	while(shipStarterCol != 'A' || shipStarterCol != 'B' || shipStarterCol != 'C' || shipStarterCol != 'D' || shipStarterCol != 'E' || shipStarterCol != 'F' || shipStarterCol != 'G' || shipStarterCol != 'H' || shipStarterCol != 'I' || shipStarterCol != 'J' || std::cin.fail()){
		std::cin.clear();
		std::cin.ignore(100, '\n');
		std::cout << "Please input a valid column: ";
		std::cin >> shipStarterCol;
	}
	std::cout << "Please input a valid row (1 - 10): ";
	std::cin >> shipStarterRow;
	while(shipStarterRow < 1 || shipStarterRow > 10 || std::cin.fail()){
		std::cin.clear();
		std::cin.ignore(100, '\n');
		std::cout << "Please input a valid column: ";
		std::cin >> shipStarterRow;;
	}
	shipLocation = shipStarterCol + shipStarterRow;

	std::cout << shipLocation << "\n";
	*/


	//for(int i = 1; i <= ships; i++){
		//Ship(stringstart, shipPlacement, i); //i is the length of the ship
	//}

//}
