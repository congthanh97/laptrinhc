#include"stdio.h"
#include"conio.h"
main()
	{
		int i;
		textmode(C80);
		textbackground(CYAN);
		window(1,1,80,25);
		clrscr();
		hop(1,1,79,25); /* Dong khung cho cua so */
		textbackground(BLUE);
		window(25,3,55,5);
		clrscr();
		gotoxy(1,1);
		textcolor(LIGHTRED);
		cprintf("\n%5c GIAO TRINH VA BAI TAP",' ');
		hop(1,1,30,3);
		textbackground(RED);
		window(20,8,60,18);
		clrscr();
		textcolor(YELLOW);
		gotoxy(1,2);
		cprintf("\n%10c TURBO C Version 2.0",' ');
		textcolor(LIGHTMAGENTA);
		gotoxy(1,4);
		cprintf("\n %10c Doi tuong phuc vu",' ');
		textcolor(LIGHTCYAN);
		gotoxy(1,6);
		cprintf("\n%10c Hoc sinh, sinh vien",' ');
		textcolor(BLUE);
		gotoxy(1,8);
		cprintf("\n%10c Nhung nguoi tu hoc",' ');
		hop(1,1,40,11);
		textbackground(LIGHTGREEN);
		window(10,20,70,23);
		clrscr();
		gotoxy(1,1);
		textcolor(WHITE);
		cprintf("\n%13c TRUONG DAI HOC TAI CHANH KE TOAN",' ');
		hop(1,1,60,4);
		getch();
	}
	hop(int x1, int y1, int x2, int y2)
		{
			int i;
			textcolor(WHITE);
			gotoxy(x1,y1);
			putch(201); /* Ve ky hieu goc tren ben trai */
			for (i=x1+1; i<=x2-1; i++)
				putch(205); /* Ke duong nam ngang tren */
			putch(187); /* Ve ky hieu goc tren ben phai */
			gotoxy(x1,y2); /* Di chuyen den goc duoi ben trai */
			putch(200); /* Ve ky hieu goc duoi ben trai */
			for (i=x1+1; i<=x2-1; i++)
				putch(205); /* Ve duong nam ngang duoi */
				putch(188); /* Ve goc duoi ben phai */
			for (i=y1+1; i<=y2-1; i++)
				{
					gotoxy(x1,i); /* Di chuyen ve goc tren ben trai */
					putch(186); /* Ke duong thang dung ben trai */
					gotoxy(x2,i); /* Di chuyen den goc tren ben phai */
					putch(186); /* Ke duong thang dung ben phai */
				}
		}
