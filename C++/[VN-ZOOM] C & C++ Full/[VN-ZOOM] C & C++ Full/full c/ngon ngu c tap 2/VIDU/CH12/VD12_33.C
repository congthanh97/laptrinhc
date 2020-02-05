#include"graphics.h"
#include"math.h"
main()
	{
		int man_hinh, kieu;
		double goc,tri;
		int x,y;
		man_hinh=DETECT;
		initgraph(&man_hinh,&kieu,"d:\\tc\\");
		line(1,100,200,100);
		for (x=0; x<200; x++)
			{
				goc=((double)x / 200) * (2*3.14159265);
				tri=sin(goc);
				y=100-100 * tri;
				putpixel(x,y,61);/* mau EGA_LIGHTMAGENTA */
			}
		getche();
		closegraph();
	}
