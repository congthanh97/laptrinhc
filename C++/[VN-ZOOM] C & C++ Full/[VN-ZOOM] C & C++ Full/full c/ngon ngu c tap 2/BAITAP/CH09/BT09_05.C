#include"stdio.h"
#include"alloc.h"
#include"string.h"
#include"conio.h"
char *thaythe(unsigned char kytu,size_t lan)
	{
		char *inkytu;
		inkytu=calloc(lan,sizeof(char)+1);
		memset(inkytu,kytu,lan);
		return(inkytu);
	}
main()
	{
		char *s, *t;
		s=calloc(60,sizeof(char));
		t=calloc(60,sizeof(char));
		clrscr();
		textcolor(YELLOW);
		cprintf(" - Nhap chuoi thu nhat (chu thuong)= ");
		gets(s);
		textcolor(LIGHTRED);
		cprintf(" - Nhap chuoi thu hai (chu thuong) = ");
		gets(t);
		cprintf("\n %s",thaythe(205,60));
		textcolor(LIGHTCYAN);
		cprintf("\n\r %10c DOI RA CHU HOA",' ');
		cprintf("\n\n\r");
		puts(strupr(s));
		cprintf("\r");
		puts(strupr(t));
		cprintf("\n %s",thaythe(205,60));
		textcolor(LIGHTMAGENTA);
		cprintf("\n\r %10c DOI TRO LAI CHU THUONG",' ');
		cprintf("\n\n\r");
		puts(strlwr(s));
		cprintf("\r");
		puts(strlwr(t));
		cprintf("\n %s",thaythe(205,60));
		textcolor(LIGHTGREEN);
		cprintf("\n\r %10c DAO NGUOC CHU",' ');
		cprintf("\n\n\r");
		puts(strrev(s));
		cprintf("\r");
		puts(strrev(t));
		cprintf("\n %s",thaythe(205,60));
		getch();
	}