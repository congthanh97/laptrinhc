#include"stdlib.h"
#include"conio.h"
int radix =10;
char buffer[20];
char *strptr;
main()
	{
		int so1=100;
		int so2=-100;
		clrscr();
		textcolor(LIGHTRED);
		cprintf("\n       MINH HOA HAM itoa()");
		textcolor(LIGHTGREEN);
		strptr=itoa(so1,buffer,radix);
		cprintf("\n\r-Neu so= %d, duoc chuyen la: %s\n",so1,strptr);
		textcolor(LIGHTMAGENTA);
		strptr=itoa(so2,buffer,radix);
		cprintf("\n\r-Neu so= %d, duoc chuyen la: %s\n",so2,strptr);
		getch();
	}
