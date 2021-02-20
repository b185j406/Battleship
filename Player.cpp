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

int Player::colToInt(std::string column){
	if(column == "A" || column == "a"){
		return(1);
	}
	else if(column == "B" || column == "b"){
		return(2);
	}
	else if(column == "C" || column == "c"){
		return(3);
	}
	else if(column == "D" || column == "d"){
		return(4);
	}
	else if(column == "E" || column == "e"){
		return(5);
	}
	else if(column == "F" || column == "f"){
		return(6);
	}
	else if(column == "G" || column == "g"){
		return(7);
	}
	else if(column == "H" || column == "h"){
		return(8);
	}
	else if(column == "I" || column == "i"){
		return(9);
	}
	else if(column == "J" || column == "j"){
		return(10);
	}
	return(0);
}

void Player::checkGrid(int shipCoords[]){

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

bool Player::validateCol(std::string column){
	bool isValid = false;
	do{
		if(column == "A" || column == "a"){
			isValid = true;
			return(true);
		}
		else if(column == "B" || column == "b"){
			isValid = true;
			return(true);
		}
		else if(column == "C" || column == "b"){
			isValid = true;
			return(true);
		}
		else if(column == "D" || column == "d"){
			isValid = true;
			return(true);
		}
		else if(column == "E" || column == "e"){
			isValid = true;
			return(true);
		}
		else if(column == "F" || column == "f"){
			isValid = true;
			return(true);
		}
		else if(column == "G" || column == "g"){
			isValid = true;
			return(true);
		}
		else if(column == "H" || column == "h"){
			isValid = true;
			return(true);
		}
		else if(column == "I" || column == "i"){
			isValid = true;
			return(true);
		}
		else if(column == "J" || column == "j"){
			isValid = true;
			return(true);
		}
		else{
			isValid = false;
			return(false);
		}
	}while(isValid == false);
}

std::string Player::intToString(int num){
	std::string temp = std::to_string(num);
	return(temp);
}

bool Player::validateRow(int row){
	bool isValid = false;
	do{
		if(row == 1){
			isValid = true;
			return(true);
		}
		else if(row == 2){
			isValid = true;
			return(true);
		}
		else if(row == 3){
			isValid = true;
			return(true);
		}
		else if(row == 4){
			isValid = true;
			return(true);
		}
		else if(row == 5){
			isValid = true;
			return(true);
		}
		else if(row == 6){
			isValid = true;
			return(true);
		}
		else if(row == 7){
			isValid = true;
			return(true);
		}
		else if(row == 8){
			isValid = true;
			return(true);
		}
		else if(row == 9){
			isValid = true;
			return(true);
		}
		else if(row == 10){
			isValid = true;
			return(true);
		}
		else{
			return(false);
		}
	}while(isValid == false);

}

void Player::anchorShips(int length){
	std::string shipStarterCol;
	int shipStarterRow = 0;
	int shipLength = length;
	std::string shipLocation;
	std::string shipPlacement;

	std::cout << "\nWhat orientation would you like the ship to be placed in?\n";

	do{
		std::cout << "Vertical or Horizontal? (V / H): ";
		std::cin >> shipPlacement;
	}while(!std::cin.fail() && shipPlacement != "V" && shipPlacement != "v" && shipPlacement != "H" && shipPlacement != "h");

	//Need to implement a check, where it executes the two following do/while statements
	//And keeps executing them, untill a valid string is entered.

	std::cout << "\nWhere would you like to place the head of the ship? \n";
	do{
		std::cout << "Please input a valid column (A - J): ";
		std::cin >> shipStarterCol;
	}while(validateCol(shipStarterCol) == false);

	do{
		std::cout << "Please input a valid row (1 - 10): ";
		std::cin >> shipStarterRow;
	}while(validateRow(shipStarterRow) == false);

	if(validatePosition(shipStarterRow, shipStarterCol, shipPlacement, shipLength) == true){
		shipLocation = shipStarterCol + intToString(shipStarterRow);
		Ship newShip(shipLocation, shipPlacement, shipLength);
	}
	else{
		std::cout << "\n\nInvalid Coordinates, try again.\n\n";
		std::cout << "\nWhere would you like to place the head of the ship? \n";
		do{
			std::cout << "Please input a valid column (A - J): ";
			std::cin >> shipStarterCol;
		}while(validateCol(shipStarterCol) == false);

		do{
			std::cout << "Please input a valid row (1 - 10): ";
			std::cin >> shipStarterRow;
		}while(validateRow(shipStarterRow) == false);
	}

	//After the position is validated, update the playerGrid with the correct coordinates


}

bool Player::validatePosition(int row, std::string col, std::string direction, int size){

	//Would be similar to the ship array creater. In that it scans inputs accordingly.
	//Would use the colToInt function to validate the spot on the array.
	return(false);

}
