#include"graphics.h"
#define MAX 160
#define KC 20
#define KT 18
main()
	{
		int man_hinh, kieu,x,y;
		man_hinh=CGA;
		kieu=CGAC0;
		initgraph(&man_hinh, &kieu,"d:\\tc\\");
		for (y=0; y<MAX; y+=KC);
			for (x=0; x<MAX; x+=KC)
				{
					moveto(x,y);
					square(KT);
				}
		getche();
		closegraph();
	}
square(kich_thuoc)
int kich_thuoc;
	{
		linerel(kich_thuoc,0);
		linerel(0,kich_thuoc);
		linerel(-kich_thuoc,0);
		linerel(0,-kich_thuoc);
	}
