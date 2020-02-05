#include"graphics.h"
#include"conio.h"
#include"math.h"
main()
	{
		int man_hinh,kieu;
		int truc_x,truc_y;
		float x,y,i;
		double ty_le;
		struct diem
			{
				int x,y;
			}m,tam_diem;
		man_hinh=CGA;
		kieu=CGAC0;
		initgraph(&man_hinh,&kieu,"d:\\tc\\");
		setbkcolor(BLUE);
		getaspectratio(&truc_x, &truc_y);
		ty_le=(double)truc_x / (double)truc_y;
		tam_diem.x=getmaxx()/2;
		tam_diem.y=getmaxy()/2;
		settextjustify(CENTER_TEXT, CENTER_TEXT);
		setcolor(3);
		line(0,tam_diem.y, getmaxx()-25,tam_diem.y);
		line(tam_diem.x,20,tam_diem.x,getmaxy());
		outtextxy(tam_diem.x-10, tam_diem.y+5,"o");
		outtextxy(getmaxx()-16,tam_diem.y,">X ");
		settextstyle(DEFAULT_FONT,VERT_DIR,0);
		outtextxy(tam_diem.x,18,">");
		settextstyle(DEFAULT_FONT,HORIZ_DIR,0);
		outtextxy(tam_diem.x,8,"Y");
		i=0;
		while (i<=getmaxx())
			{
				x=(i-160)/2;
				m.x=ceil((double)i);
				y=x+sin(x);
				m.y=tam_diem.y-ty_le * (y*20);
				if (abs(m.y) < 200)
					putpixel(m.x,m.y,2);
				i+=2.0/7;
			}
		rectangle(tam_diem.x+10,tam_diem.y+10,getmaxx()-10,getmaxy()-15);
		setviewport(tam_diem.x+9,tam_diem.y+9,getmaxx()-9,getmaxy()-16,1);
		settextstyle(2,0,4);
		outtextxy(48,12,"He truc toa do");
		settextstyle(1,0,3);
		outtextxy(70,40,"DESCARTES");
		while (!kbhit());
		closegraph();
	}

