#include"stdio.h"
#include"alloc.h"
#include"conio.h"
main()
	{
		char *s;
		char k;
		s=calloc(100,sizeof(char));
		clrscr();
		textcolor(LIGHTBLUE);
		cprintf("\n\r - Nhap vao 1 chuoi : ");
		gets(s);
		cprintf("\n\n%20c",' ');
		textcolor(LIGHTRED);
		for (k=0;s[k];putch(s[k++]));
			puts(" ");
		cprintf("\n%20c",' ');
		textcolor(LIGHTCYAN);
		for (k=strlen(s)-1;k>=0;putch(s[k--]));
			puts(" ");
		textcolor(LIGHTGREEN+BLINK);
		cprintf("\n\%20c Bam phim bat ky de ket thuc",' ');
		getch();
	}

