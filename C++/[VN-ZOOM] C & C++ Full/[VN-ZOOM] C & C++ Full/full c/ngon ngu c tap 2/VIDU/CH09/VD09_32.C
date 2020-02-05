#include"stdio.h"
#include"conio.h"
main()
	{
		clrscr();
		textcolor(BLUE);
		textbackground(WHITE);
		cputs("\n Lenh gotoxy(1,1), cot 1, dong 1 ");
		cputs("\n\r Bam phim de chuyen lenh gotoxy(20,5)");
		cputs("\n\r cot 20, dong 5 ");
		textcolor(WHITE+BLINK);
		textbackground(BLACK);
		gotoxy(1,1);
		putch(42); /* con nhay hinh hoa thi */
		getch();
		textcolor(MAGENTA+BLINK);
		textbackground(BLACK);
		gotoxy(20,5);
		putch(219); /* con nhay la vet sang */
		textcolor(BLUE);
		textbackground(WHITE);
		cputs("\n\rBam phim bat ky de thuc hien lenh");
		cputs("\n\r gotoxy(wherex(),wherey()+2)");
		getch();
		gotoxy(wherex(),wherey()+2);
		textcolor(LIGHTCYAN+BLINK);
		textbackground(WHITE);
		putch(24);
		printf("\n");
      textcolor(BLUE);
		textbackground(WHITE);
		cputs("\n\r Bam phim bat ky de thuc hien lenh");
		cputs("\n\r gotoxy(wherex()-10, wherey()+2)");
		getch();
		gotoxy(wherex()-10, wherey()+2);
		textcolor(YELLOW+BLINK);
		textbackground(BLACK);
		putch(25); /* con nhay la mui ten  */
      textcolor(BLUE);
		textbackground(WHITE);
		cputs("\n\r Bam phim bat ky de ket thuc");
		getch();
		textcolor(YELLOW);
		textbackground(BLACK);
		clrscr();
	}
