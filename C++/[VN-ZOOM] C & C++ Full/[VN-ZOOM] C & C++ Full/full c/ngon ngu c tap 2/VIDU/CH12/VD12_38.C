#include"graphics.h"
#include"conio.h"
double aspectratio;
#define dieu_chinh(y)((int)(aspectratio * (double)(y)))
main()
	{
		int truc_x,truc_y;
   	int man_hinh,kieu;
		man_hinh=DETECT;
		initgraph(&man_hinh,&kieu,"d:\\tc\\");
		setcolor(EGA_LIGHTCYAN);
		getaspectratio(&truc_x,&truc_y);
		aspectratio=(double)truc_x / truc_y;
		ellipse(getmaxx()/2,getmaxy()/2,0,360,40,dieu_chinh(40));
		moveto(210,300);
		setcolor(EGA_YELLOW);
		outtext("Bam phim bat ky de ket thuc");
		getch();
		closegraph();
	}
