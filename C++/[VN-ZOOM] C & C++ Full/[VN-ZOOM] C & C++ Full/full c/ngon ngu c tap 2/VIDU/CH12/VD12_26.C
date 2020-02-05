#include"graphics.h"
#include"conio.h"
#define BO_QUA 0
#define CGAC0_LIGHTGREEN 1
#define CGAC0_LIGHTRED 2
main()
	{
		int man_hinh,kieu;
		int x1=0,y1=0;
		int x2=199,y2=199;
		int xc=100,yc=100;
		int ban_kinh=90;
		man_hinh=CGA;
		kieu=CGAC0;
		initgraph(&man_hinh,&kieu,"d:\\tc\\");
		setlinestyle(3,BO_QUA,THICK_WIDTH);
		setcolor(CGAC0_LIGHTGREEN);
		line(x1,y1,x2,y2);
		setcolor(CGAC0_LIGHTRED);
		circle(xc,yc,ban_kinh);
		getch();
		closegraph();
	}
