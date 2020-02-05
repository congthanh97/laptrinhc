#include"conio.h"
#include"alloc.h"
#include"string.h"
unsigned char vitri(char *dich, char*nguon)
	{
		char *s;
		s=strstr(nguon,dich);
		if (s)
			return(s-nguon);
		else
			return(0);
	}
main()
	{
		int m,n;
		char *s1,*s2;
		s1=calloc(100,sizeof(char));
		s2=calloc(100,sizeof(char));
		clrscr();
		textcolor(YELLOW);
		cprintf("\n - Nhap vao chuoi nguon :");
		gets(s1);
		textcolor(LIGHTRED);
		cprintf("\r - Nhap vao chuoi con : ");
		gets(s2);
		textcolor(LIGHTRED);
		cprintf("\n\r**********************************");
		textcolor(YELLOW);
		cprintf("\n\n\r     + Chuoi nguon la :");
		textcolor(LIGHTCYAN);
		cprintf("\n\r %s",s1);
		textcolor(LIGHTGREEN);
		cprintf("\n\r     + Chuoi nguon dai :%d ky tu",strlen(s1));
		textcolor(LIGHTRED);
		cprintf("\n\n\r     + Chuoi con la : ");
		textcolor(LIGHTMAGENTA);
		cprintf("\n\r %s",s2);
		textcolor(LIGHTGREEN);
		cprintf("\n\r * Vi tri bat dau cua chuoi con la: %u",vitri(s2,s1));
		textcolor(LIGHTCYAN + BLINK);
		cprintf("\n\n\r * Bam phim bat ky de ket thuc");
		getch();
	}
