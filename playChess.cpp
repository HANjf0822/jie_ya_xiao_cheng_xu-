#include"playChess.h"

void playGame(int board[20][20], bool flag)
{
	MOUSEMSG m;
	int x = 0, y = 0;//ʵ������
	int line = 0, col = 0;//��������������

	while (1)
	{
		m = GetMouseMsg();
		for (int i = 1; i < 20; i++)
		{
			for (int j = 1; j < 20; j++)
			{
				if (abs(m.x - i * 25) < 10 && abs(m.y - j * 25) < 10)
				{
					//�������������£����ж� �����������
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
				MessageBox(NULL,"�Ѿ���������","��ʾ",MB_OK);
				continue;
			}

			if (!flag)//���Ϻ�����
			{
				setfillcolor(BLACK);
				solidcircle(x, y, 10);//��������
				board[line][col] = 1;//������1
				flag = true;
			}
			else
			{
				setfillcolor(WHITE);
				solidcircle(x, y, 10);
				board[line][col] = 2;//������2
				flag = false;
			}
		}
		int temp;
		if (temp = judge(line, col, flag, board))
		{
			if (flag)
			{
				MessageBox(NULL, "����ʤ��", "��Ϸ����", MB_OK);
				exit(0);
			}
			else
			{
				MessageBox(NULL, "����ʤ��", "��Ϸ����", MB_OK);
				exit(0);
			}
		}
		//printf("%d\n", temp);
		//flag = !flag;
	}

}