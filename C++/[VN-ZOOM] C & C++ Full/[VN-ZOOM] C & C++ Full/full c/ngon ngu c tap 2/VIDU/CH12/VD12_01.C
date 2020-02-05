#include"stdio.h"
#include"conio.h"
main()
	{
		clrscr();
		printf("         DO HOA VAN BAN");
		printf("\n Bam phim bat ky de hien thi");
		printf("\n Che do man hinh 80 cot, 25 dong, 16 mau");
		getch();
		textmode(C80);
		textbackground(BLUE);
		textcolor(WHITE+BLINK);
		clrscr();
		gotoxy(31,12);
		cprintf("Chao ban than men");
		gotoxy(22,13);
		cprintf("Chung ta dang hoc ve do hoa van ban");
		gotoxy(26,24);
		textcolor(YELLOW);
		cprintf("Bam phim bat ky de hien thi");
		gotoxy(25,25);
		cprintf("Che do man hinh 40 cot, 16 mau");
		getch();
		textmode(C40);
      textbackground(BLUE);
		textcolor(RED);
		clrscr();
		gotoxy(13,16);
		cprintf("Chao ban than men");
		gotoxy(5,17);
		cprintf("Chung ta dang hoc ve do hoa van ban");
		getch();
		textmode(C80);
	}