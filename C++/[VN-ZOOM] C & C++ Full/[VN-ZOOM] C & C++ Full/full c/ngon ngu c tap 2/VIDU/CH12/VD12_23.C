#include"graphics.h"
#include"conio.h"
#define cat_bo 1
main()
	{
		int man_hinh,kieu;
		struct viewporttype vp;
		unsigned int k,maxx,maxy;
		man_hinh=DETECT;
		initgraph(&man_hinh,&kieu,"d:\\tc\\");
		maxx=getmaxx();
		maxy=getmaxy();
		rectangle(0,0,maxx,maxy);
		settextjustify(CENTER_TEXT,CENTER_TEXT);
		outtextxy(maxx/2,15,"GIAO TRINH LY THUYET VA BAI TAP TURBO C");
		rectangle(0,40,maxx,maxy);
		setviewport(1,41,maxx-1,maxy-1,cat_bo);
		clearviewport();
		getviewsettings(&vp);
		k=(vp.bottom-vp.top)/20;
		do
			{
				circle((vp.right-vp.left)/2,(vp.bottom-vp.top)/k,
				(vp.bottom-vp.top)/k);
				k+=(vp.bottom-vp.top)/20;
			}
		while (k<=(vp.bottom-vp.top));
		outtextxy(300,300,"Bam phim bat ky de xoa cua xem");
		getche();
		clearviewport();
		outtextxy(300,300,"Bam phim bat ky de ve cac khung chu nhat");
		getche();
		clearviewport();
      k=(vp.bottom-vp.top)/20;
		do
			{
				rectangle(vp.left+k,vp.top+k,vp.right-k,vp.bottom-k);
				k+=(vp.bottom-vp.top)/20;
			}
		while (k<=(vp.bottom-vp.top)/2);
		outtextxy(300,25,"Bam phim bat ky de ve duong tron");
		getch();
		cleardevice();
		setviewport(0,0,maxx,maxy,cat_bo);
		circle(maxx/2,maxy/2,maxy/2);
		outtextxy(325,250,"Bam phim bat ky de ket thuc");
		getch();
		closegraph();
	}
