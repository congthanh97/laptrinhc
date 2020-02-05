#include"stdio.h"
#include"conio.h"
#include"string.h"
void doi_xung(char *st)
	{
		gotoxy((80-strlen(st))/2,wherey());
		cprintf("%s",st);
	}
main()
	{
		char ch[30];
		clrscr();
		textcolor(WHITE);
		textbackground(BLACK);
		clrscr();
		printf("\n         DO HOA VAN BAN");
		printf("\nTao chuoi doi xung qua truc man hinh");
		printf("\n-Nhap vao mot dong van ban: ");
		gets(ch);
		textmode(C80);
		textbackground(BLUE);
		textcolor(WHITE+BLINK);
		clrscr();
		gotoxy(1,10);
		doi_xung(ch);
		getch();
	}