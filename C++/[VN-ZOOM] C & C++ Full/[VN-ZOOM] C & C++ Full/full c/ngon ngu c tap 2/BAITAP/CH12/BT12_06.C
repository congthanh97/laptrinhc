#include"graphics.h"
#include"conio.h"
#include"stdlib.h"
#define XEN 1
typedef struct
	{
		int x,y;
	}diem;
int man_hinh, kieu, tam_x, tam_y;
diem m;
unsigned int ban_kinh, mau;
main()
	{
		int maxx, maxy;
		man_hinh=CGA;
		kieu=CGAC0;
		initgraph(&man_hinh,&kieu,"d:\\tc\\");
		setbkcolor(BLUE);
		maxx=getmaxx();
		maxy=getmaxy();
		rectangle(0,0,maxx,maxy);
		setviewport(1,1,maxx-1,maxy-1,XEN);
		tam_x=maxx/2;
		tam_y=maxy/2;
		randomize();
		mau=0;
		do
			{
				mau++;
				mau=mau %3+1;
				m.x=random(maxx);
				m.y=random(maxy);
				setcolor(mau);
				line(tam_x,tam_y,m.x,m.y);
			}
		while (!kbhit());
		closegraph();
	}
