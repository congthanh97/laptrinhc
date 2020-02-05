#include"conio.h"
#include"stdio.h"
#include"mem.h"
#include"alloc.h"
main()
	{
		int i;
		char *nguon;
		char *dich;
		nguon=calloc(80,sizeof(char));
		dich=calloc(80,sizeof(char));
		clrscr();
		textcolor(YELLOW);
		cprintf("\n- Nhap vao 1 chuoi : ");
		textcolor(LIGHTGREEN);
		gets(nguon);
		clrscr();
      textcolor(YELLOW);
		cprintf("\n\r***********************************");
		textcolor(LIGHTRED);
		cprintf("\n\r         - Chuoi nguon la");
		textcolor(LIGHTCYAN);
		cprintf("\n\r %s",nguon);
		textcolor(LIGHTGREEN);
		cprintf("\n\n\r- Muon sao chep bao nhieu ky tu ? ");
		scanf("%2d",&i);
		textcolor(YELLOW);
		cprintf("\r***********************************");
		movmem(nguon,dich,i);
      textcolor(LIGHTMAGENTA);
		cprintf("\n\r         - Chuoi dich la ");
		textcolor(YELLOW);
		cprintf("\n\r %s",dich);
		textcolor(LIGHTCYAN + BLINK);
		cprintf("\n\n\r * Bam phim bat ky de ket thuc");
		getch();
	}
