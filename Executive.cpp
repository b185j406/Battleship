//Executive.cpp

#include "Executive.h"
#include <iostream>


Executive::Executive(){ //constructor
	playerOneGrid = new int*[10];
	playerTwoGrid = new int*[10];
	for(int i = 0; i < 10; i++){
		playerOneGrid[i] = new int[10];
		playerTwoGrid[i] = new int[10];
	}
	fillGrids();
}

Executive::~Executive() //deconstructor
{
	for(int i = 0; i < 10; i++)
	{
		delete playerOneGrid[i];
		delete playerTwoGrid[i];
	}
	delete[] playerOneGrid;
	delete[] playerTwoGrid;
}

void Executive::run(){  //runs the program
	printPlayerOneGrid();
	std::cout << "\n";
	printPlayerTwoGrid();
}

void Executive::fillGrids(){
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
			playerOneGrid[i][j] = 0;
			playerTwoGrid[i][j] = 0;
		}
	}
}

void Executive::printPlayerOneGrid(){
	std::cout << "+------------------------------------------Player One's Board-------------------------------------------+\n";
	std::cout << "|			A	B	C	D	E	F	G	H	I	J	|\n";
	std::cout << "+---------------+---------------------------------------------------------------------------------------+\n";
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
			if(j == 0){
				std::cout << "|" << "\t" << i+1 << "\t" << "|" << "\t" << playerOneGrid[i][j] << "\t";
			}
			else if(j == 9){
				std::cout << playerOneGrid[i][j] << "\t" << "|";
			}
			else{
				std::cout << playerOneGrid[i][j] << "\t";
			}
		}
		std::cout << "\n";
	}
	std::cout << "+---------------+---------------------------------------------------------------------------------------+\n";
}

void Executive::printPlayerTwoGrid(){
	std::cout << "+------------------------------------------Player Two's Board-------------------------------------------+\n";
	std::cout << "|			A	B	C	D	E	F	G	H	I	J	|\n";
	std::cout << "+---------------+---------------------------------------------------------------------------------------+\n";
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
			if(j == 0){
				std::cout << "|" << "\t" << i+1 << "\t" << "|" << "\t" << playerTwoGrid[i][j] << "\t";
			}
			else if(j == 9){
				std::cout << playerTwoGrid[i][j] << "\t" << "|";
			}
			else{
				std::cout << playerTwoGrid[i][j] << "\t";
			}
		}
		std::cout << "\n";
	}
	std::cout << "+---------------+---------------------------------------------------------------------------------------+\n";
}
