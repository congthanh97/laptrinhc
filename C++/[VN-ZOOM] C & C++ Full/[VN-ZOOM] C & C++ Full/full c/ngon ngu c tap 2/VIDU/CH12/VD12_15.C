#include"graphics.h"
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
		line(x1,y1,x2,y2);
		circle(xc,yc,ban_kinh);
		getche();
		closegraph();
	}
