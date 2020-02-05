#include"graphics.h"
#include"conio.h"
main()
	{
   	int man_hinh,kieu;
		man_hinh=DETECT;
		initgraph(&man_hinh,&kieu,"d:\\tc\\");
		setfillstyle(BKSLASH_FILL,EGA_LIGHTCYAN);
		sector(getmaxx()/2,getmaxy()/2,30,150,100,180);
		moveto(220,380);
		setcolor(EGA_YELLOW);
		outtext("Bam phim bat ky de ket thuc");
		getch();
		closegraph();
	}
