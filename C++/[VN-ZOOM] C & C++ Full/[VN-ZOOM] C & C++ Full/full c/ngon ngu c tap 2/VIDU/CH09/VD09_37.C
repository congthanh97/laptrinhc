#include"stdio.h"
#include"conio.h"
main()
	{
		int i;
		clrscr();
		textcolor(YELLOW);
		textbackground(BLACK);
		cprintf("\n- Nhap vao 1 so he 10 : ");
		cscanf("%3d",&i);
		textcolor(LIGHTCYAN);
		textbackground(BLACK);
		cprintf("\n\r + Chuyen sang he 8 = %o ",i);
		textcolor(LIGHTGREEN);
		textbackground(BLACK);
		cprintf("\n\r + Chuyen sang he 16 = %x",i);
		textcolor(LIGHTRED + BLINK);
		textbackground(BLACK);
		cprintf("\n\r Bam phim bat ky de ket thuc");
		getch();
	}
