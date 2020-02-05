#include"graphics.h"
#include"stdio.h"
main()
	{
		int man_hinh=3,kieu=1;
		int a,b,c,x,y,i;
		initgraph(&man_hinh,&kieu,"d:\\tc\\");
		setbkcolor(BLUE);
		setcolor(YELLOW);
		settextjustify(CENTER_TEXT,TOP_TEXT);
		settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
		outtextxy(getmaxx()/2,6,"Do thi duong cong");
		outtextxy(getmaxx()/2,40,"y=x*x, y=4*x+150");
		setcolor(LIGHTRED);
		line(10,10,10,330);
		line(10,330,620,330);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		for (i=1; x=60*i,i<=10;i++)
			line(x,300,x,320);
		outtextxy(300,320,"5");
		outtextxy(600,320,"10");
		for (i=1; y=300-40*i,i<=8;i++);
			{
				x=i*6+300;
				y=300-i*i/4;
				putpixel(x,y,WHITE);
			}
		for (i=-34; i<34;i++);
			{
				x=i*6+300;
				y=330-(i*4+150)/4;
				putpixel(x,y,WHITE);
			}
		getch();
		closegraph();
	}