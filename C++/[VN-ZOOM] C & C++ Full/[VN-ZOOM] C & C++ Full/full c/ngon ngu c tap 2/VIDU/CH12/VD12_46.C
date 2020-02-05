#include"graphics.h"
#include"conio.h"
#include"alloc.h"
#define TRAI 0
#define DINH 0
#define PHAI 319
#define DAY  199
#define BAN_KINH 8
#define CGAC0_LIGHTRED 2
main()
	{
		int man_hinh, kieu;
		int x,y,dx,dy, dx_cu,dy_cu;
		void *bong_doi;
		unsigned kich_thuoc;
		man_hinh=CGA;
		kieu=CGAC0;
		initgraph(&man_hinh, &kieu, "d:\\tc\\");
		rectangle(TRAI, DINH, PHAI, DAY);
		x=y=BAN_KINH+10;
		setcolor(CGAC0_LIGHTRED);
		setfillstyle(SOLID_FILL,CGAC0_LIGHTRED);
		circle(x,y,BAN_KINH);
		kich_thuoc=imagesize(x-BAN_KINH,y-BAN_KINH,
				x+BAN_KINH,y+BAN_KINH);
		bong_doi=malloc(kich_thuoc);
		getimage(x-BAN_KINH,y-BAN_KINH,x+BAN_KINH,
				y+BAN_KINH,bong_doi);
		dx=2;
		dy=1;
		while (!kbhit())
			{
				putimage(x-BAN_KINH,y-BAN_KINH,bong_doi,COPY_PUT);
				dx_cu=x;
				dy_cu=y;
				x+=dx;
				y+=dy;
				if (x<=TRAI+BAN_KINH+2 || x >=PHAI-BAN_KINH-2)
					dx=-dx;
				if (y <=DINH+BAN_KINH+1 || y>= DAY-BAN_KINH-1)
					dy=-dy;
				putimage(dx_cu-BAN_KINH,dy_cu-BAN_KINH,bong_doi,XOR_PUT);
			}
		closegraph();
	}

