#include"graphics.h"
main()
	{
		int man_hinh,kieu;
		int trai=0,dinh=0,phai=170,day=150;
		int x1=0,y1=0;
		int x2=199,y2=199;
		int xc=100,yc=100;
		int cat_bo=1;
		int ban_kinh=90;
		man_hinh=CGA;
		kieu=CGAC0;
		initgraph(&man_hinh,&kieu,"d:\\tc\\");
		setviewport(trai,dinh,phai,day,cat_bo);
		rectangle(trai,dinh,phai,day);
		line(x1,y1,x2,y2);
		circle(xc,yc,ban_kinh);
		outtextxy(17,90,"Cua xem (viewport)");
		getche();
		closegraph();
	}
