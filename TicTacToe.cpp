#include "TicTacToe.h"
#include <iostream>

using namespace std;

TicTacToe::TicTacToe()
{
	//new grid 
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			grid[i][j] = '-';
		}
	}

}


TicTacToe::~TicTacToe()
{
}


void TicTacToe::reset()
{
	TicTacToe();
}

int TicTacToe::move(int row , int col , int player)
{
	char xo;
	//select player character
	if (player == 1){
		xo = 'x';
	}
	else{
		xo = 'o';
	}
	//validate an empty space and place
	if (grid[row][col] == '-'){
		grid[row][col] = xo;
		return 1;
	}
	else
	{
		return 0;
	}
	
}

void TicTacToe::print(){
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			cout << grid[i][j] ;
		}
		//next row
		cout << "" <<endl ;
	}
}

int TicTacToe::over(){
	int winFlag = 0;
	char winnerChar = '-';
	print();
	
	//check each row
	for (int i = 0; i < 3; i++){
		if ((grid[i][0] == grid[i][1] && grid[i][1] == grid[i][2]) && grid[i][1] != '-' ){
			winnerChar = grid[i][0];
			winFlag = 1;
			i++;
		}
	}
	
	//check eack col
	
		for (int i = 0; i < 3; i++) {
			if ((grid[0][i] == grid[1][i] && grid[1][i] == grid[2][i]) && grid[0][i] != '-'){
				cout << "=======^^^" << endl;
				winnerChar = grid[0][i];
				winFlag = 1;
				i++;
			}
	} 
	//check diagonals
	if ((grid[0][0] == grid[1][1] && grid[1][1] == grid[2][2]) || (grid[0][2] == grid[1][1] && grid[1][1] == grid[2][0]))
	{
		winnerChar = grid[1][1];
		winFlag = 1;
	}

	
	if (winFlag == 1){
		//identify winner
		if (winnerChar == 'o'){
			cout << "Game over ,player 2 wins" << endl;
			
		}
		else{
			cout << "Game over ,player 1 wins" << endl;
			
		}
		cout << "sdfghjedrfgthj======================" << endl;
		return 0;
	}
	else
	{
		int progress = 0;
		//determine draw or game continues
		for (int i = 0; i < 3; i++){
			for (int j = 0; j < 3; j++){
				if (grid[i][j] == '-')
				{
					progress = 1;
				}
			}
		}
		
		if (progress == 1)
		{
			cout << "Game Continues" << endl;
			return 1;
		}
		else
		{
			cout << "Game over , Draw" << endl;
			return 0;
		}

	}
}