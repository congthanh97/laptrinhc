#include"graphics.h"
#include"conio.h"
#include"math.h"
#define PI atan(1)*4
typedef struct
	{
		int x,y;
	}diem;
const ban_kinh=100;
main()
	{
		diem m[15];
		int man_hinh=CGA, kieu=CGAC0,truc_x,truc_y;
		int k,j,tam_x, tam_y;
		double rad,tyle;
		initgraph(&man_hinh,&kieu,"d:\\tc\\");
		setbkcolor(BLUE);
		getaspectratio(&truc_x,&truc_y);
		tyle=(double)truc_x/truc_y;
		tam_x=getmaxx()/2;
		tam_y=getmaxy()/2;
		for (k=0; k<15; k++)
			{
				rad=(double)2*k*PI/15;
				m[k].x=tam_x+(int)(sin(rad)*ban_kinh);
				m[k].y=tam_y+(int)(cos(rad)*ban_kinh*tyle);
			}
		circle(tam_x,tam_y,ban_kinh);
		for (k=0; k<15; k++)
			for (j=0; j<15; j++)
				line(m[k].x,m[k].y,m[j].x,m[k].y);
		getch();
		closegraph();
	}
