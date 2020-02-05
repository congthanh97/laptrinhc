#include"conio.h"
const char dong[80]="Ky niem 300 nam Sai Gon - Tp Ho Chi Minh";
void settextcolor(int mau_nen,int mau_chu)
	{
		textbackground(mau_nen);
		textcolor(mau_chu);
	}
main()
	{
		int k;
		textmode(C80);
		textbackground(MAGENTA);
		clrscr();
		for (k=1; k<=10; k++)
			{
				settextcolor(k % 8, (k+4) % 8 + 8);
				gotoxy(1,2*k);
				cprintf("%s",dong);
			}
		do
			{
			}
		while (!kbhit());
	}