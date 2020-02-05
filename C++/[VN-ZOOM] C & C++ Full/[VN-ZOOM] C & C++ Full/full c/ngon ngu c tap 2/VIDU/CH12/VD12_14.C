#include"graphics.h"
main()
	{
		int man_hinh, kieu, i;
		man_hinh=3;
		kieu=1;
		printf("\nKHOI DONG CHE DO DO HOA HINH HOA");
		printf("\nBam phim bat ky de thay doi 16 mau man hinh");
		getch();
		initgraph(&man_hinh,&kieu,"d:\\tc\\");
		for (i=0; i<16; i++)
			{
				setbkcolor(i);
				getch();
			}
		closegraph();
	}