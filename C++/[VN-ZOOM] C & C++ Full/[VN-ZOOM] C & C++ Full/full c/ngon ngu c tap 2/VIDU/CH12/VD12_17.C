#include"graphics.h"
#include"stdio.h"
#include"conio.h"
main()
	{
		int man_hinh, kieu;
		man_hinh=9;
		kieu=2;
		clrscr();
		printf("\nCHUYEN DOI KIEU DO HOA");
		initgraph(&man_hinh,&kieu,"d:\\tc\\");
		circle(getmaxx()/2, getmaxy()/2, getmaxy()/2);
		setbkcolor(1);
		setcolor(YELLOW);
		outtextxy(180,210,"Day la man hinh do hoa hinh hoa");
		outtextxy(120,230,"Bam phim bat ky de chuyen sang man hinh van ban");
		getch();
		restorecrtmode();
		textbackground(5);
		window(0,0,79,24);
		clrscr();
		gotoxy(30,10);
		printf("Day la man hinh do hoa van ban");
		gotoxy(20,11);
		printf("Bam phim bat ky de chuyen tro lai man hinh do hoa");
		getch();
		setgraphmode(2);
      circle(getmaxx()/2, getmaxy()/2, getmaxy()/2);
		setbkcolor(2);
		setcolor(WHITE);
		outtextxy(180,210,"Tro ve lai man hinh do hoa hinh hoa");
		outtextxy(220,230,"Bam phim bat ky de ket thuc");
		getch();
		closegraph();
	}
