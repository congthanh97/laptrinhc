#include"graphics.h"
#include"conio.h"
main()
	{
		int man_hinh=CGA, kieu=CGAC0;
		struct arccoordstype arcinfo;
		int k,tam_x,tam_y,n;
		clrscr();
		textcolor(LIGHTBLUE);
		gotoxy(5,3);
		cprintf("-Muon ve da giac bao nhieu canh: ");
		cscanf("%d",&n);
		initgraph(&man_hinh,&kieu,"d:\\tc\\");
		setbkcolor(BLUE);
		tam_x=getmaxx()/2;
		tam_y=getmaxy()/2;
		for (k=0; k<n; k++)
			{
				setcolor(0);
				arc(tam_x,tam_y,(360*k)/n,(360*(k+1))/n,tam_y);
				getarccoords(&arcinfo);
				setcolor(1);
				line(arcinfo.xstart,arcinfo.ystart,
							arcinfo.xend,arcinfo.yend);
			}
		delay(500000);
		closegraph();
	}
