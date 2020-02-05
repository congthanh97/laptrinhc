#include"graphics.h"
#include"conio.h"
#include"stdlib.h"
main()
	{
		int man_hinh=CGA,kieu=CGAC0;
		int barheight[]={1,3,5,4,3,2,1,5,4,2,3};
      struct viewporttype vp;
		int xstep,ystep;
		int i,j,h,color,bheight,maxx,maxy;
		char buffer[10];
		initgraph(&man_hinh,&kieu,"d:\\tc\\");
		setbkcolor(BLUE);
		maxx=getmaxx();
		h=3*textheight("H");
		getviewsettings(&vp);
		settextjustify(CENTER_TEXT,TOP_TEXT);
		settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
		outtextxy(maxx/2,6,"Hinh Bar 3-D");
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		setviewport(vp.left+50,vp.top+30,vp.right-50,
									vp.bottom-10,1);
		getviewsettings(&vp);
		line(h,h,h,vp.bottom-vp.top-h);
		line(h,(vp.bottom-vp.top)-h,(vp.right-vp.left)-h,
									(vp.bottom-vp.top)-h);
		xstep=((vp.right-vp.left)-(2*h))/10;
		ystep=((vp.bottom-vp.top)-(2*h)) /5;
		j=(vp.bottom-vp.top)-h;
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
		for (i=0; i<11; ++i)
			{
				color=random(3);
				setfillstyle(i+1,color);
				line(j,(vp.bottom-vp.top)-h,j,(vp.bottom-vp.top-3)-(h/2));
				itoa(i,buffer,10);
				outtextxy(j,(vp.bottom-vp.top)-(h/2),buffer);
				if (i !=10)
					{
						bheight=(vp.bottom-vp.top)-h-i;
						bar3d(j,(vp.bottom-vp.top-h)-(barheight[i]*ystep),
							j+xstep,bheight,15,1);
					}
				j+=xstep;
			}
		getch();
		closegraph();
	}