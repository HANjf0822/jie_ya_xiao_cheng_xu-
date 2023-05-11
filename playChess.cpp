#include"playChess.h"

void playGame(int board[20][20], bool flag)
{
	MOUSEMSG m;
	int x = 0, y = 0;//实际坐标
	int line = 0, col = 0;//行数，列数坐标

	while (1)
	{
		m = GetMouseMsg();
		for (int i = 1; i < 20; i++)
		{
			for (int j = 1; j < 20; j++)
			{
				if (abs(m.x - i * 25) < 10 && abs(m.y - j * 25) < 10)
				{
					//如果是这种情况下，就判定 是这个坐标了
					x = i * 25;
					y = j * 25;
					line = i;
					col = j;
				}
			}
		}

		if (m.uMsg == WM_LBUTTONDOWN)
		{
			if (board[line][col] != 0)
			{
				MessageBox(NULL,"已经由棋子了","提示",MB_OK);
				continue;
			}

			if (!flag)//碰上黑子了
			{
				setfillcolor(BLACK);
				solidcircle(x, y, 10);//绝对像素
				board[line][col] = 1;//黑子是1
				flag = true;
			}
			else
			{
				setfillcolor(WHITE);
				solidcircle(x, y, 10);
				board[line][col] = 2;//白子是2
				flag = false;
			}
		}
		int temp;
		if (temp = judge(line, col, flag, board))
		{
			if (flag)
			{
				MessageBox(NULL, "黑子胜利", "游戏结束", MB_OK);
				exit(0);
			}
			else
			{
				MessageBox(NULL, "白子胜利", "游戏结束", MB_OK);
				exit(0);
			}
		}
		//printf("%d\n", temp);
		//flag = !flag;
	}

}