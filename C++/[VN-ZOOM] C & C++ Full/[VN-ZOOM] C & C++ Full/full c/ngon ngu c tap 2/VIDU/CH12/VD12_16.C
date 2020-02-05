#include"graphics.h"
main()
	{
		int man_hinh=DETECT;
		int kieu;
		int maxx,maxy;
		int trai,dinh,phai,day;
		initgraph(&man_hinh,&kieu,"d:\\tc\\");
		maxx=getmaxx();
		maxy=getmaxy();
		trai=dinh=0;
		phai=maxx;
		day=maxy;
		rectangle(trai,dinh,phai,day);
		getche();
		closegraph();
	}
