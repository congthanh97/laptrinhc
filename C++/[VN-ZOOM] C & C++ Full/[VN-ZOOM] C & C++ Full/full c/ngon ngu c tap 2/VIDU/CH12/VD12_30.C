#include"graphics.h"
#define x 300
#define y  40
#define kich_thuoc 3
main()
	{
		int man_hinh, kieu,j,i;
		man_hinh=DETECT;
		initgraph(&man_hinh, &kieu,"d:\\tc\\");
		settextstyle(TRIPLEX_FONT,HORIZ_DIR,kich_thuoc);
		line(x,0,x,350);
		for (j=0; j<y*5; j+=y);
			line(50,j,600,j);
		moveto(x,0);
		outtext("Default");
		moveto(x,y);
		settextjustify(LEFT_TEXT,TOP_TEXT);
		setcolor(RED);
		outtext("Left-Top ");
		moveto(x,y*2);
		settextjustify(RIGHT_TEXT,TOP_TEXT);
		setcolor(YELLOW);
		outtext("Right-Top");
		moveto(x,y*4);
		settextjustify(CENTER_TEXT,BOTTOM_TEXT);
		setcolor(LIGHTGREEN);
		outtext("Center-Top");
		setcolor(LIGHTGREEN);
		moveto(x,y*6);
		settextjustify(LEFT_TEXT,BOTTOM_TEXT);
		setcolor(LIGHTBLUE);
		outtext("Left-Bottom");
		moveto(x,y*7);
		settextjustify(RIGHT_TEXT,BOTTOM_TEXT);
		setcolor(LIGHTCYAN);
		outtext("Right-Bottom");
		moveto(x,y*8);
		settextjustify(CENTER_TEXT,BOTTOM_TEXT);
		setcolor(LIGHTRED);
		outtext("Center-Bottom");
		settextstyle(GOTHIC_FONT,HORIZ_DIR,1);
		setcolor(WHITE);
		outtextxy(320,450,"Bam phim bat ky de ket thuc");
		getch();
		closegraph();
	}
