#include"graphics.h"
#include"conio.h"
#include"stdlib.h"
main()
	{
		int man_hinh=CGA,kieu=CGAC0,maxx;
		int barheight[]={1,3,5,2,4};
		int style[]={1,3,10,5,9,1};
		int xstep,ystep;
		int sheight, swidth;
		int i,j,h;
		struct viewporttype vp;
		char buffer[40];
		initgraph(&man_hinh,&kieu,"d:\\tc\\");
		setbkcolor(BLUE);
		maxx=getmaxx();
		h=3*textheight("H");
		getviewsettings(&vp);
		settextjustify(CENTER_TEXT,TOP_TEXT);
		settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
		outtextxy(maxx/2,6,"Hinh Bar 2-D");
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		setviewport(vp.left+50,vp.top+30,vp.right-50,vp.bottom-10,1);
		getviewsettings(&vp);
		sheight=vp.bottom-vp.top;
		swidth=vp.right-vp.left;
		line(h,h,h,sheight-h);
		line(h,sheight-h,sheight-h,sheight-h);
		ystep=(sheight-(2*h)) /5;
		xstep=(swidth-(2*h)) /5;
		j=sheight-h;
		settextjustify(CENTER_TEXT,CENTER_TEXT);
		for (i=0; i<6;++i)
			{
				line(h/2,j,h,j);
				itoa(i,buffer,10);
				outtextxy(0,j,buffer);
				j-=ystep;
			}
		j=h;
		settextjustify(CENTER_TEXT,TOP_TEXT);
		for (i=0; i<6; ++i)
			{
				setfillstyle(style[i],random(4));
				line(j,sheight-h,j,sheight-3-(h/2));
				itoa(i,buffer,10);
				outtextxy(j,sheight-(h/2),buffer);
				if (i !=5)
					{
						bar(j,(sheight-h)-(barheight[i]*ystep),
							j+xstep,sheight-h-1);
						rectangle(j,(sheight-h)-(barheight[i]*ystep),
							j+xstep,sheight-h);
					}
				j+=xstep;
			}
		getch();
		closegraph();
	}