#include"graphics.h"
#include"conio.h"
main()
	{
   	int man_hinh,kieu;
		man_hinh=DETECT;
		initgraph(&man_hinh,&kieu,"d:\\tc\\");
		setfillstyle(INTERLEAVE_FILL,EGA_LIGHTGRAY);
		bar3d(200,100,400,300,35,1);
		moveto(220,380);
		setcolor(EGA_YELLOW);
		outtext("Bam phim bat ky de ket thuc");
		getch();
		closegraph();
	}
