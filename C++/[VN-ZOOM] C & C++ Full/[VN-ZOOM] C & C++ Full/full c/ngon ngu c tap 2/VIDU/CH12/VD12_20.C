#include"graphics.h"
#include"stdio.h"
main()
	{
		int man_hinh=DETECT;
		int kieu;
		initgraph(&man_hinh,&kieu,"d:\\tc\\");
		printf("\n      CAC THONG SO MAN HINH HIEN HANH");
		printf("\n-Card man hinh            = %s",getdrivername());
		printf("\n-Kieu man hinh toi da la  = %d",getmaxmode());
		printf("\n-Vi tri con tro           = %d,%d",getx(),gety());
		printf("\n-Toa do goc duoi ben phai = %d,%d",getmaxx(),getmaxy());
		getche();
		closegraph();
	}
