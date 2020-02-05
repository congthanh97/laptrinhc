#include"graphics.h"
#define KICH_THUOC 4
main()
	{
		int i;
		int man_hinh, kieu;
		man_hinh=DETECT;
		initgraph(&man_hinh, &kieu,"d:\\tc\\");
		moveto(70,50);
		setcolor(YELLOW);
		settextstyle(GOTHIC_FONT,HORIZ_DIR,KICH_THUOC);
		outtext("Phong Gothic");
		moveto(350,50);
		setcolor(CYAN);
		settextstyle(TRIPLEX_FONT,HORIZ_DIR,KICH_THUOC);
		outtext("Phong Triplex");
		moveto(70,100);
		setcolor(WHITE);
		settextstyle(SMALL_FONT,HORIZ_DIR,KICH_THUOC);
		outtext("Phong Small");
		moveto(350,100);
		setcolor(RED);
		settextstyle(SANS_SERIF_FONT,HORIZ_DIR,KICH_THUOC);
		outtext("Phong Sansserif");
		moveto(120,180);
		setcolor(LIGHTCYAN);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,KICH_THUOC);
		outtext("Phong default");
		moveto(120,250);
		setcolor(LIGHTMAGENTA);
		for (i=1; i<=13;i++)
			outtext("=");
		settextstyle(TRIPLEX_FONT,HORIZ_DIR,KICH_THUOC);
		setcolor(LIGHTBLUE);
		outtextxy(80,335,"Bam phim bat ky de ket thuc");
		getch();
		closegraph();
	}
