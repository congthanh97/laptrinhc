#include"conio.h"
#include"stdlib.h"
main()
	{
		char *s;
		clrscr();
		gotoxy(1,1);
		cprintf("Toi la Turbo C ");
		s=calloc(16,sizeof(char));
		gettext(1,1,15,1,s);
		do
			{
			}
		while (!kbhit());
		clrscr();
		puttext(10,10,30,10,s);
		delay(100000);
	}
