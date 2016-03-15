#include "TicTacToe.h"
#include <iostream>

using namespace std;

TicTacToe::TicTacToe()
{
	//new grid 
	 grid[3][3] = { { '-', '-', '-' },
	                { '-', '-', '-' }, 
					{ '-', '-', '-' }};

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