#include"stdio.h"
main()
	{
		int doiten;
		clrscr();
		doiten=rename("baitho.txt","tucngu.txt");  /* Doi ten cu thanh moi */
		if (doiten==0)
			printf("\n\tDa doi ten tap tin xong roi");

		else
			{
				printf("\n\tKhong doi duoc ten tap tin, vi: ");
				perror("\n\tLy do ");
			}
		printf("\n\tBam phim bat ky de ket thuc");
		getch();
	}