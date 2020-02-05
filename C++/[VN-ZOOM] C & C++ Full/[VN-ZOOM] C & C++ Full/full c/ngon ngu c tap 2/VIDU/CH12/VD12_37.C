#include"graphics.h"
#include"conio.h"
main()
	{
		int x,y;
   	int man_hinh,kieu;
		man_hinh=DETECT;
		initgraph(&man_hinh,&kieu,"d:\\tc\\");
		setcolor(EGA_LIGHTCYAN);
		x=getmaxx()/2;
		y=getmaxy()/2;
		arc(x,y,60,120,150);
		moveto(210,300);
		setcolor(EGA_YELLOW);
		outtext("Bam phim bat ky de ket thuc");
		getch();
		closegraph();
	}
