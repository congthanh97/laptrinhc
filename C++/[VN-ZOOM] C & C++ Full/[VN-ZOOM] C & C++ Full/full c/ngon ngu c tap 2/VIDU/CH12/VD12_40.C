#include"graphics.h"
#include"conio.h"
const struct pointtype M[6]={150,160, 203,179, 262,284,
				165,250, 184,250, 150,160};
main()
	{
   	int man_hinh,kieu;
		man_hinh=DETECT;
		initgraph(&man_hinh,&kieu,"d:\\tc\\");
		setfillstyle(XHATCH_FILL,EGA_LIGHTMAGENTA);
		fillpoly(6,(int far *)M);
		moveto(120,300);
		setcolor(EGA_YELLOW);
		outtext("Bam phim bat ky de ket thuc");
		getch();
		closegraph();
	}
