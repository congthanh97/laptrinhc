#include"graphics.h"
#include"stdio.h"
#include"stdlib.h"
#include"conio.h"
#include"math.h"
#define pi 3.14159*2
int x0=320,y0=175,x1,y1,x2,y2,k;
int r1=150,r2=120;
char ch[20];
main()
	{
		int man_hinh,kieu,i;
		man_hinh=3;kieu=1;
		initgraph(&man_hinh,&kieu,"d:\\tc\\");
		setbkcolor(1);
		setcolor(11);
		circle(320,175,r1);
		setfillstyle(SOLID_FILL,11);
		floodfill(320,175,11);
		setcolor(2);
		circle(320,175,r2);
		setfillstyle(SOLID_FILL,2);
		floodfill(320,175,2);
		for (i=0; i<12; i++)
			{
				x1=r1*sin(i*pi/12);
				y1=r1*cos(i*pi/12);
				x2=r2*sin(i*pi/12);
				y2=r2*cos(i*pi/12);
				x1+=x0; y1+=y0;
				x2+=x0;y2+=y0;
				line(x1,y1,x2,y2);
			}
		settextstyle(0,0,1);
		settextjustify(1,1);
		setcolor(15);
		for (i=0; i<12; i++)
			{
				x1=(r1+20)*sin((i+6)*pi/12);
				y1=(r1+20)*cos((i+6)*pi/12);
				x1+=x0; y1+=y0;
				outtextxy(x1,y1,itoa(12-i,ch,10));
			}
		circle(320,175,4);
		outtextxy(320,125,"SAI GON");
		outtextxy(320,140,"oOo");
		outtextxy(320,225,"Quartz");
		getch();
		closegraph();
	}
