#include"conio.h"
void hop(int x1,int y1, int x2, int y2)
	{
		int i;
		gotoxy(x1,y1);
		putch(201);
		for (i=x1+1; i<=x2-1; putch(205), i++);
		putch(187);
		gotoxy(x1,y2);
		putch(200);
		for(i=x1+1; i<=x2-1; putch(205), i++);
		putch(188);
		for(i=y1+1; i<=y2-1;i++)
			{
				gotoxy(x1,i);
				putch(186);
				gotoxy(x2,i);
				putch(186);
			}
	}