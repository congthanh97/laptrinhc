#include"stdlib.h"
#include"conio.h"
main()
	{
		char so1[80], so2[80];
		double tong;
		clrscr();
		textcolor(LIGHTRED);
		cprintf("\nMINH HOA HAM atof()");
		textcolor(LIGHTBLUE);
		cprintf("\n\rNhap so thu nhat= ");
		gets(so1);
		textcolor(LIGHTGREEN);
		cprintf("\rNhap so thu hai = ");
		gets(so2);
		textcolor(YELLOW);
		cprintf("***********************************************");
		textcolor(LIGHTCYAN);
		cprintf("\n\rSau khi chuyen doi chuoi thanh so kieu double");
		textcolor(LIGHTMAGENTA);
		cprintf("\n\r-So thu nhat la: %15.2f",atof(so1));
		textcolor(YELLOW);
		cprintf("\n\r-So thu hai  la: %15.2f",atof(so2));
		tong=atof(so1)+atof(so2);
		textcolor(WHITE);
		cprintf("\n\r+Tong 2 so la  = %15.2f",tong);
		getch();
	}
