#include<iostream>
using namespace std;
#include"ChessBoard.cpp"
#include"playChess.h"

bool flag = false;//黑色是false ，但是黑子先行
int board[20][20] = { 0 };
int main()
{
	initGame();

	playGame(board, flag);   

	//getchar();

	return 0;

}
