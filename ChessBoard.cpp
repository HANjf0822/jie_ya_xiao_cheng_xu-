#include<graphics.h>
//#include<iostream>
//using namespace std;

inline void initGame()
{
	initgraph(600, 500);//�������ûѧ��
	loadimage(NULL, "D:/onedrive �ļ���/OneDrive/����/kirby.jpg");

	for (int i = 0; i <= 500; i += 25)
	{
		line(0, i, 500, i);
		line(i, 0, i, 500);
	}
	line(501, 0, 501, 500);

	outtextxy(500, 550, "���һ������");
	outtextxy(500, 560, "��Ҷ�������");

}