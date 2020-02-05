#include"conio.h"
#include"dos.h"
main()
	{
		struct date d;
		struct time t;
		char ch;
		char buf[2];
		textmode(C80);
		textbackground(BLUE);
		textcolor(WHITE);
		clrscr();
		gotoxy(33,7);
		cprintf("DONG HO DIEN TU");
		gotoxy(28,18);
		cprintf("Bam nut bat ky de coi ngay");
		gotoxy(29,19);
		cprintf("Bam phim <Esc> de thoat");
		hop(32,9,49,15);
		window(33,10,48,14);
		textbackground(BLACK);
		textcolor(WHITE);
		clrscr();
		gotoxy(5,1);
		textcolor(YELLOW);
		cprintf("Dong Ho");
		textcolor(RED);
		hop(2,2,15,4);
		gotoxy(5,5);
		textcolor(GREEN);
		cprintf("Viet Nam");
		xoa();
		getdate(&d);
		ch='a';
		textcolor(BLACK);
		while (ch!=27)
			{
				while (!kbhit())
					{
						gettime(&t);
						gotoxy(5,3);
						cprintf("%02d:%02d:%02d ",t.ti_hour,t.ti_min,t.ti_sec);
					}
				ch=getch();
				xoa();
				gotoxy(4,3);
				cprintf("%02d-%02d-%02d",d.da_day,d.da_mon,d.da_year);
				delay(50000);
				xoa();
			}
	}
hop(int x1, int y1, int x2, int y2)
	{
		int i;
		gotoxy(x1,y1);
		putch(201);
		for (i=x1+1; i<x2; i++)
			putch(205);
		putch(187);
		gotoxy(x1,y2);
		putch(200);
		for (i=x1+1; i<x2; i++)
			putch(205);
		putch(188);
		for (i=y1+1; i<y2; i++)
			{
				gotoxy(x1,i);
				putch(186);
				gotoxy(x2,i);
				putch(186);
			}
	}
xoa()
	{
		textbackground(WHITE);
		gotoxy(3,3);
		cprintf("           ");
	}
