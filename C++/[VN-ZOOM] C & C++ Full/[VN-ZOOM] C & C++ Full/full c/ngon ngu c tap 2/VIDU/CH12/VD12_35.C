#include"graphics.h"
#include"conio.h"
const int x[4]={10,10,200,150};
int man_hinh,kieu;
main()
	{
		man_hinh=DETECT;
		initgraph(&man_hinh,&kieu,"d:\\tc\\");
		setcolor(EGA_LIGHTCYAN);
		setlinestyle(DOTTED_LINE,0,NORM_WIDTH);
		moveto(20,70);
		settextstyle(TRIPLEX_FONT,HORIZ_DIR,2);
		outtext("Khung chu nhat");
		rectangle(x[0],x[1],x[2],x[3]);
		moveto(50,200);
		setcolor(EGA_LIGHTMAGENTA);
		outtext("Bam phim bat ky de xem tiep");
		getch();
		clearviewport();
		setcolor(EGA_LIGHTRED);
		setlinestyle(USERBIT_LINE,55,THICK_WIDTH);
		moveto(35,70);
		settextstyle(GOTHIC_FONT,HORIZ_DIR,2);
		outtext("Khung chu nhat");
		rectangle(x[0],x[1],x[2],x[3]);
		moveto(50,200);
		setcolor(EGA_YELLOW);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
		outtext("Bam phim bat ky de ket thuc");
		getch();
		closegraph();
	}
