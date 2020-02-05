#include"conio.h"
#define	TRAI 10
#define  DINH 8
#define  PHAI 52
#define  DAY  21
#define  CAO (DAY-DINH+1)
main()
	{
		int j;
		clrscr();
		window(TRAI, DINH, PHAI, DAY);
		textcolor(RED);
		textbackground(GREEN);
		clrscr();
		for (j=0; j< 100; j++)
			{
				cputs("Turbo-C ");
				delay(500);
			}
		gotoxy(15,8);
		textcolor(142);
		textbackground(GREEN);
		cputs("XIN CHAO BAN");
		gotoxy(1,CAO);
		getche();
	}