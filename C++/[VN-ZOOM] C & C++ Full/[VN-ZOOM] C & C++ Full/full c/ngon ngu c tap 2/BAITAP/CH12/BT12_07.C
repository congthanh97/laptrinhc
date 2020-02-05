#include"graphics.h"
#include"conio.h"
const struct pointtype m[6]={0,10,53,29,112,134,
					65,100,34,100,0,10};
main()
	{
		int man_hinh=CGA, kieu=CGAC1;
		initgraph(&man_hinh,&kieu,"d:\\tc\\");
		setfillstyle(CLOSE_DOT_FILL,2);
		fillpoly(6,(int far *)m);
		getch();
		closegraph();
	}
