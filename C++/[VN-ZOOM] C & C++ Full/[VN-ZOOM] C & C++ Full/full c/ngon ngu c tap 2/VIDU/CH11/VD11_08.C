#include"stdio.h"
main()
	{
		int xoa;
		clrscr();
		xoa=remove("tucngu.txt");  /* Xoa ten tap tin */
		if (xoa==0)
			printf("\n\tDa xoa ten tap tin xong roi");
		else
			{
				printf("\n\tKhong xoa duoc ten tap tin, vi: ");
				perror("\n\tLy do ");
			}
		printf("\n\tBam phim bat ky de ket thuc");
		getch();
	}