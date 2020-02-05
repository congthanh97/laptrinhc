#include"stdio.h"
main()
	{
		struct xx    /* Dinh nghia kieu */
			{
				int so;  /* Thanh phan 1 la so */
				char chu; /* Thanh phan 2 la chu */
			};
		struct xx *pt;  /* Khai bao bien con tro chi den cau truc */
		/* Dung ham malloc() de gan cau truc cho con tro */
		pt=(struct xx *) malloc(sizeof(struct xx));
		pt->so=999;
		pt->chu='A';
		clrscr();
		printf(" Dung ham malloc() thay toan tu dia chi (&)\n");
		printf("- Thanh phan 1 ( so ) =%d\n",pt->so);
		printf("- Thanh phan 2 ( chu ) =%c",pt->chu);
		getch();
	}