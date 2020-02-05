#include"stdio.h"
main()
	{
		struct xx    /* Dinh nghia kieu */
			{
				int so;  /* Thanh phan 1 la so */
				char chu; /* Thanh phan 2 la chu */
			};
		struct xx xx1;  /* Khai bao bien */
		struct xx *pt;  /* Khai bao bien con tro chi den cau truc */
	 /* Dung toan tu dia chi (&) de gan cau truc cho con tro */
		pt=&xx1;
		pt->so=999;
		pt->chu='A';
		clrscr();
		printf(" Truy xuat cac thanh phan cau truc qua con tro\n");
		printf("\          bang toan tu dia chi (&)\n");
		printf("- Thanh phan 1 ( so ) =%d\n",pt->so);
		printf("- Thanh phan 2 ( chu ) =%c",pt->chu);
		getch();
	}