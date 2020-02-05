#include"stdlib.h"
#include"conio.h"
main()
	{
		char p[20];
		int so;
		clrscr();
		textcolor(LIGHTRED);
		cprintf("\n       MINH HOA HAM itoa()");
		textcolor(YELLOW);
		cprintf("\n\r+Nhap mot so nguyen he 10= ");
		scanf("%d",&so);
		textcolor(LIGHTGREEN);
		itoa(so,p,16);
		cprintf("\n\r-So: %d he 10 chuyen sang he 16 la:%s\n",so,p);
		getch();
	}
