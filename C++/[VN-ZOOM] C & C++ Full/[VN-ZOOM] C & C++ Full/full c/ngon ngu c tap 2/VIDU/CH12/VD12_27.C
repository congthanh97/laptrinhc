#include"graphics.h"
#include"stdio.h"
#include"stdlib.h"
main()
	{
		int man_hinh,kieu,i=10;
		man_hinh=3;
		kieu=1;
		initgraph(&man_hinh,&kieu,"d:\\tc\\");
		setbkcolor(11);
		while (i>=0)
			{
				setcolor(i);
				circle(320,175,20*i);
				setfillstyle(SOLID_FILL,i);
				floodfill(320,175,i);
				i--;
			}
		setcolor(RED);
		outtextxy(160,8,"10 vong tron dong tam co cac mau khac nhau");
		setcolor(BLUE);
		outtextxy(200,335,"Bam phim bat ky de ket thuc");
		getch();
		closegraph();
	}
