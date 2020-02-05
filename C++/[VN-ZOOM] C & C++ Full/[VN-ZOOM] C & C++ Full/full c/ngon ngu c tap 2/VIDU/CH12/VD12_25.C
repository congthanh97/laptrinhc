#include"graphics.h"
#include"conio.h"
#include"stdlib.h"
#define ESC 27
main()
	{
		char c;
		int k;
		int man_hinh=CGA,kieu=CGAC0;
		initgraph(&man_hinh,&kieu,"d:\\tc\\");
		setbkcolor(EGA_BLUE);
		setcolor(YELLOW);
		outtextxy(10,05,"Bam cac so tu 0 den 3 de thay doi mau");
		outtextxy(45,15,"Bam phim <Esc> de ket thuc");
		do
			{
				c=getch();
				k=atoi(&c);
				setcolor(k);
				circle(getmaxx()/2,getmaxy()/2+18,getmaxy()/2);
			}
		while (c!=ESC);
		closegraph();
	}
