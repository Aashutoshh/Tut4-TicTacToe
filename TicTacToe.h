#pragma once
class TicTacToe
{

private:
	char grid[3][3];


public:

	TicTacToe();
	void reset();
	int move(int row, int col, int player);
	void print();
	int over();
	~TicTacToe();
	
};

