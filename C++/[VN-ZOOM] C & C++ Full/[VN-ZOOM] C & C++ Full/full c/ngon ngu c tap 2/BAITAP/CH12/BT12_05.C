#include"graphics.h"
#include"conio.h"
#include"stdlib.h"
main()
	{
		int man_hinh=CGA, kieu=CGAC0;
		int sao=0;
		int x,y,i,h,w,mau;
		struct viewporttype vp;
		initgraph(&man_hinh,&kieu,"d:\\tc\\");
		setbkcolor(BLUE);
		rectangle(0,0,getmaxx(),getmaxy());
		setviewport(1,1,getmaxx()-1,getmaxy()-1,1);
		getviewsettings(&vp);
		h=vp.bottom-vp.top;
		w=vp.right-vp.left;
		do
			{
				srand(sao);
				for (i=0; i<500; ++i)
					{
						x=1+random(w-1);
						y=1+random(h-1);
						mau=random(4);
						putpixel(x,y,mau);
					}
				srand(sao);
				for (i=0; i<500; ++i)
					{
               	x=1+random(w-1);
						y=1+random(h-1);
						mau=getpixel(x,y);
						if (mau == random(4))
						putpixel(x,y,0);
					}
			}
		while (!kbhit());
		closegraph();
	}
