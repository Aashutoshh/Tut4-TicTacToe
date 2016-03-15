#include "TicTacToe.h"

#include <iostream>
using namespace std;

int main(){

	game();
	return 0;
}


void game(){
	//game play 
	TicTacToe game;
	game.reset();
	int count = 0 , row , col;
	do{
		if (count % 2 == 0){
			cout << "Player 1 turn :" << endl;
			cout << "Enter row:" << endl;
			cin >> row;
			cout << "Enter col:" << endl;
			cin >> col;
			game.move(row, col , 1);
			count++;
		}
		else{
			cout << "Player 2 turn :" << endl;
			cout << "Enter row:" << endl;
			cin >> row;
			cout << "Enter col:" << endl;
			cin >> col;
			game.move(row, col, 2);
			count++;
		}
		

	} while (game.over() == 1);

	game.reset();

}