#include "Judge.h"
//#include<iostream>
//using namespace std;
//using namespace std;
//#include<iostream>
int judge(int a, int b, bool flag, int board[20][20])
{
	int num = flag? 1 : 2;//判断是黑子还是白子
	//cout << num << endl;
	//printf("%d\n", num);
	int i, j;
	for (i = a, j = b - 4; j <= b; j++)// |
	{
		if (j > 0 && j < 16 && board[i][j] == num && board[i][j + 1] == num && board[i][j + 2] == num
			&& board[i][j + 3] == num && board[i][j + 4] == num)
		{
			return 1;
		}
	}
	for (i = a - 4, j = b; i <= a; i++)// --
	{
		if (i > 0 && i < 16 && board[i][j] == num && board[i + 1][j] == num && board[i + 2][j] == num
			&& board[i + 3][j] == num && board[i + 4][j] == num)
		{
			return 1;
		}
	}
	for(i = a - 4,j = b - 4; i <= a,j <= b; i++, j++)
	{
		if (i > 0 && i < 16 && j>0 && j < 16 && board[i][j] == num && board[i + 1][j + 1] == num && board[i + 2][j + 2] == num
			&& board[i + 3][j + 3] == num && board[i + 4][j + 4] == num)
		{
			return 1;
		}
	}
	for (i = a - 4,j = b + 4; i <= a,j >= b; i++, j--)
	{
		if (i > 0 && i < 16 && j>0 && j < 16 && board[i][j] == num && board[i + 1][j - 1] == num && board[i + 2][j - 2] == num
			&& board[i + 3][j - 3] == num && board[i + 4][j - 4] == num)
		{
			return 1;
		}
	}
	return 0;
}