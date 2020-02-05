#include"graphics.h"
#include"conio.h"
int man_hinh,kieu,maxx,maxy,i;
main()
	{
		char phim;
		man_hinh=DETECT;
		initgraph(&man_hinh,&kieu,"d:\\tc\\");
		maxx=getmaxx();
		maxy=getmaxy();
		rectangle(0,0,maxx,maxy);
		for (i=0; i<=maxx; i+=10)
			{
				moveto(maxx/2,maxy/2);
				lineto(maxx-i,maxy);
				moveto(maxx/2,maxy/2);
				lineto(i,0);
			}
		setvisualpage(0);
		setactivepage(1);
		rectangle(10,20,maxx-10,maxy-40);
		settextjustify(CENTER_TEXT,CENTER_TEXT);
		outtextxy(maxx/2,maxy-2*textheight("M"),
			"Bam phim bat ky de tiep tuc, bam <Esc> de thoat");
		setvisualpage(1);
		getch();
		setvisualpage(0);
		getch();
		setvisualpage(1);
		settextstyle(TRIPLEX_FONT,HORIZ_DIR,7);
		outtextxy(maxx/2,maxy/2,"Turbo C");
		setactivepage(1);
		getch();
		do
			{
				setvisualpage(0);
				getch();
				setvisualpage(1);
				phim=getch();
			}
		while (phim !=27);
		closegraph();
	}
