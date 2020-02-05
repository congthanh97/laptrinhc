#include"conio.h"
#include"dos.h"
main()
	{
		int k;
		char s[80]="Dang di chuyen van ban tren man hinh";
		textmode(C80);
		textbackground(BLUE);
		textcolor(WHITE);
		clrscr();
		gotoxy(1,1);
		cprintf("%30s",s);
		for (k=2; k<25; k++)
			{
				movetext(1,1,36,1,1,k);
				delay(5000);
				gotoxy(1,k);
				cprintf("                                     ");
			}
	}