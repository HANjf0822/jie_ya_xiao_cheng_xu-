#include<iostream>
using namespace std;
#include"ChessBoard.cpp"
#include"playChess.h"

bool flag = false;//��ɫ��false �����Ǻ�������
int board[20][20] = { 0 };
int main()
{
	initGame();

	playGame(board, flag);   

	//getchar();

	return 0;

}
