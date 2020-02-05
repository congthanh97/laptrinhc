#include"conio.h"
#include"stdio.h"
#include"string.h"
#include"alloc.h"
main()
	{
		char *chuoi;
		chuoi=calloc(80,sizeof(char));
		clrscr();
		textcolor(YELLOW);
		cprintf("\n- Nhap vao 1 chuoi : ");
		gets(chuoi);
		textcolor(LIGHTRED);
		cprintf("\n\r- Chuoi nay co : %d ky tu ke ca ky tu trong \n",strlen(chuoi));
		textcolor(LIGHTGREEN);
		cprintf("\n\r- Dao nguoc chuoi nay thanh \n ");
		textcolor(LIGHTCYAN);
		cprintf("\n\r %s ",strrev(chuoi));
		textcolor(LIGHTMAGENTA + BLINK);
		cprintf("\n\n\r * Bam phim bat ky de ket thuc");
		getch();
	}
