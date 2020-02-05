#include"graphics.h"
#include"math.h"
main()
	{
		int man_hinh=CGA,kieu=CGAC0;
		int xasp,yasp;
		float x,y,i;
		double ratioasp;
		struct diem
			{
				int x,y;
			}m,center;
		initgraph(&man_hinh,&kieu,"d:\\tc\\");
		setbkcolor(BLUE);
		getaspectratio(&xasp,&yasp);;
		ratioasp=(double)xasp/(double)yasp;
		center.x=getmaxx()/2;
		center.y=getmaxy()/2;
		settextjustify(CENTER_TEXT,CENTER_TEXT);
		setcolor(2);
		line(0,center.y,getmaxx()-25,center.y);
		line(center.x,20,center.x,getmaxy());
		outtextxy(center.x-10,center.y+5,"o");
		outtextxy(getmaxx()-16,center.y,">x");
		settextstyle(DEFAULT_FONT,VERT_DIR,0);
		outtextxy(center.x,18,">");
		settextstyle(DEFAULT_FONT,HORIZ_DIR,0);
		outtextxy(center.x,8,"y");
		i=-16;
		while (i<=16)
			{
				x=10*i-15*sin((double)i);
				y=10-15*cos((double)i);
				m.x=center.x+x;
				m.y=center.y-ratioasp*y;
				if (abs(y) < 200)
					putpixel(m.x,m.y,1);
				i=i+(1.0/15);
			}
		while (!kbhit());
		closegraph();
	}