#include"graphics.h"
#include"conio.h"
#include"stdlib.h"
#define CAT_XEN 1
typedef struct
	{
		int x,y;
	}diem;
int man_hinh, kieu, toado_x, toado_y;
diem m;
unsigned int ban_kinh,mau;
main()
	{
		int maxx,maxy;
		man_hinh=DETECT;
		initgraph(&man_hinh,&kieu,"d:\\tc\\");
		setcolor(EGA_LIGHTCYAN);
		maxx=getmaxx();
		maxy=getmaxy();
		rectangle(0,0,maxx,maxy);
		setviewport(1,1,maxx-1,maxy-1,CAT_XEN);
		toado_x=maxx/2;
		toado_y=maxy/2;
		randomize();
		mau=0;
		do
			{
				mau++;
				mau=mau %3+3;
				m.x=random(maxx);
				m.y=random(maxy);
				setcolor(mau);
				line(toado_x,toado_y,m.x,m.y);
			}
		while (!kbhit());
		closegraph();
	}
