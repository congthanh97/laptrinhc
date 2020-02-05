#include"graphics.h"
#include"stdio.h"
#include"stdlib.h"
int b[8]={500,250,520,270,530,230,500,250};
main()
	{
		int man_hinh, kieu,i,k,x1,y1;
		int a[8];
		man_hinh=3;
		kieu=1;
		initgraph(&man_hinh, &kieu, "d:\\tc\\");
		setbkcolor(BLUE);
		while (getch() !='n')
			{
				for (i=0; i<8; i++)
					a[i]=b[i];
				printf("\n-Nhap he so k: ");
				scanf("%d",&k);
				cleardevice();
				for (i=0; i<8; i+=2)
					scale(&a[i],&a[i+1],524,264,k);
				setfillstyle(1,RED);
				setcolor(3);
				drawpoly(7,a);
				x1=a[0]/2+(a[2]+a[4])/2;
				y1=a[1]/2+(a[3]+a[5])/4;
				floodfill(x1,y1,3);
			}
		getch();
		closegraph();
	}
scale(x,y,ox,oy,k)
int *x,*y,ox,oy,k;
	{
		*x-=ox;*y-=oy;
		*x*=k;*y*=k;
		*x+=ox;*y+=oy;
	}