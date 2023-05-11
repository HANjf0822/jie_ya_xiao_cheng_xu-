#include<graphics.h>
//#include<iostream>
//using namespace std;

inline void initGame()
{
	initgraph(600, 500);//这个函数没学过
	loadimage(NULL, "D:/onedrive 文件夹/OneDrive/桌面/kirby.jpg");

	for (int i = 0; i <= 500; i += 25)
	{
		line(0, i, 500, i);
		line(i, 0, i, 500);
	}
	line(501, 0, 501, 500);

	outtextxy(500, 550, "玩家一：黑棋");
	outtextxy(500, 560, "玩家二：白棋");

}