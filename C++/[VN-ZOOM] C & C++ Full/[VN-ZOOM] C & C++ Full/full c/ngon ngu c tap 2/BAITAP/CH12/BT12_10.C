#include"graphics.h"
#include"conio.h"
main()
	{
		int man_hinh=CGA,kieu=CGAC0;
		struct PTS
			{
				int x,y;
			}dagiac[15];
		int mau;
		int i,maxx,maxy;
		struct viewporttype vp;
		clrscr();
		initgraph(&man_hinh,&kieu,"d:\\tc\\");
		setbkcolor(BLUE);
		rectangle(5,5,getmaxx()-5,getmaxy()-5);
		setviewport(5,5,getmaxx()-5,getmaxy()-5,1);
		getviewsettings(&vp);
		maxx=vp.right;
		maxy=vp.bottom;
		while (!kbhit())
			{
				mau=1+rand() %2;
				setfillstyle(rand()%10,mau);
				setcolor(mau);
				for (i=0; i<14; i++)
					{
						dagiac[i].x=rand() % maxx;
						dagiac[i].y=rand() % maxy;
					}
				dagiac[i].x=dagiac[0].x;
				dagiac[i].y=dagiac[1].y;
				fillpoly(15, (int far *)dagiac);
			}
		closegraph();
	}
