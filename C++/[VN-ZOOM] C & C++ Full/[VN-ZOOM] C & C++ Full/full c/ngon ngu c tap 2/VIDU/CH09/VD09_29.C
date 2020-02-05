#include"stdio.h"
#include"conio.h"
main()
	{
		clrscr();
		textmode(C80);
		textbackground(WHITE);
		textcolor(BLUE);
		cputs("\n\n Man hinh 16 mau 80 cot \r");
		textbackground(RED);
		textcolor(YELLOW);
		cputs("\n\n  Turbo c 2.0 \r");
		textbackground(WHITE);
		cputs("\n\n Bam phim bat ky de chuyen sang \r");
		cputs("\n\n man hinh 16 mau 40 cot \r");
		getch();
		textmode(C40);
		textbackground(RED);
		textcolor(YELLOW);
		cputs("\n   Turbo C 2.0 \r");
		cputs("\n\n Bam phim bat ky de chuyen tro ve \r");
		cputs("\n\n man hinh 16 mau 80 cot \r");
		getch();
		textmode(C80);
		textbackground(WHITE);
		textcolor(RED);
		cputs("\n   Turbo C 2.0 \r");
		cputs("\n Bam phim bat ky de ket thuc\r");
		getch();
		textbackground(BLACK);
		textcolor(WHITE);
		clrscr();
	}
