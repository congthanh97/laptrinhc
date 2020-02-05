#include"graphics.h"
#include"conio.h"
main()
	{
   	int man_hinh,kieu;
		man_hinh=DETECT;
		initgraph(&man_hinh,&kieu,"d:\\tc\\");
		setfillstyle(LTSLASH_FILL,EGA_LIGHTGREEN);
		fillellipse(getmaxx()/2,getmaxy()/2,200,100);
		moveto(220,380);
		setcolor(EGA_YELLOW);
		outtext("Bam phim bat ky de ket thuc");
		getch();
		closegraph();
	}
