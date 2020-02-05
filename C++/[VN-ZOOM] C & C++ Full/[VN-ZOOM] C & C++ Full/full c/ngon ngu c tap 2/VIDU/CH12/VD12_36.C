#include"graphics.h"
#include"conio.h"
const struct pointtype M[5]={150,80,200,160,140,260,60,100,70,50};
main()
	{
   	int man_hinh,kieu;
		man_hinh=DETECT;
		initgraph(&man_hinh,&kieu,"d:\\tc\\");
		setcolor(EGA_LIGHTCYAN);
		drawpoly(5,(int far *)M);
		moveto(50,300);
		setcolor(EGA_YELLOW);
		outtext("Bam phim bat ky de ket thuc");
		getch();
		closegraph();
	}
