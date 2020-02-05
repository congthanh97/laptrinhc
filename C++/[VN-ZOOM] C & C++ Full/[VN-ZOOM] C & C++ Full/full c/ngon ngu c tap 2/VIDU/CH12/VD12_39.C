#include"graphics.h"
#include"conio.h"
main()
	{
   	int man_hinh,kieu;
		man_hinh=DETECT;
		initgraph(&man_hinh,&kieu,"d:\\tc\\");
		setfillstyle(CLOSE_DOT_FILL,EGA_LIGHTCYAN);
		bar(250,150,400,250);
		moveto(220,300);
		setcolor(EGA_YELLOW);
		outtext("Bam phim bat ky de ket thuc");
		getch();
		closegraph();
	}
