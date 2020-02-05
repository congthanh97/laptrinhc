#include"stdio.h"
main()
	{
		struct xx
			{
				int so;  /* Thanh phan 1 la so */
				char chu; /* Thanh phan 2 la chu */
			};
		struct xx *pt;  /* Khai bao bien con tro chi den cau truc */
		int j;
		clrscr();
		printf(" Kich thuoc cua cau truc xx = %d\n",sizeof(struct xx));
		for (j=0;j<4;j++)
			{
				pt = (struct xx*) malloc(sizeof(struct xx));
				printf(" Con tro pt =%x\n",pt);
			}
		getch();
	}