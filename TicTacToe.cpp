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


