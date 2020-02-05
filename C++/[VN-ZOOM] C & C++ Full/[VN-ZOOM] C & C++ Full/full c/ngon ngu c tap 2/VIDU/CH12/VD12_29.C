#include"graphics.h"
main()
	{
		int nhanX,chiaX,nhanY,chiaY,i;
		int man_hinh, kieu;
		man_hinh=DETECT;
		initgraph(&man_hinh, &kieu,"d:\\tc\\");
		settextstyle(TRIPLEX_FONT,HORIZ_DIR,0);
		moveto(200,00);
		nhanX=1;chiaX=1;nhanY=1;chiaY=1;
		setusercharsize(nhanX,chiaX,nhanY,chiaY);
		setcolor(RED);
		outtext("Turbo C ");
		moveto(200,60);
		nhanX=2;chiaX=1;nhanY=1;chiaY=1;
		setusercharsize(nhanX,chiaX,nhanY,chiaY);
		setcolor(YELLOW);
		outtext("Turbo C ");
		moveto(200,110);
		nhanX=1;chiaX=1;nhanY=2;chiaY=1;
		setusercharsize(nhanX,chiaX,nhanY,chiaY);
		setcolor(LIGHTCYAN);
		outtext("Turbo C ");
		moveto(200,180);
		nhanX=2;chiaX=1;nhanY=3;chiaY=1;
		setusercharsize(nhanX,chiaX,nhanY,chiaY);
		setcolor(LIGHTBLUE);
		outtext("Turbo C ");
		moveto(200,320);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		setcolor(LIGHTMAGENTA);
		outtext("Phong va kich thuoc default");
		moveto(260,370);
		setcolor(LIGHTGREEN);
		for (i=1; i<=13;i++)
			outtext("=");
		settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
		setcolor(WHITE);
		outtextxy(180,400,"Bam phim bat ky de ket thuc");
		getch();
		closegraph();
	}
