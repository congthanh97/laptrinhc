#include"stdio.h"
main()
	{
		struct so_chu
			{
				int so;
				char chu;
			};
		struct so_chu bien_1;
		struct so_chu bien_2;
		clrscr();
		bien_1.so=2;
		bien_1.chu='z';
		bien_2.so=3;
		bien_2.chu='y';
		printf("		- Ky so thu nhat = %d\n",bien_1.so);
		printf("		- Ky so thu hai  = %d\n",bien_2.so);
		printf("		- Ky tu thu nhat  = %c\n",bien_1.chu);
		printf("		- Ky tu thu hai  = %c\n",bien_2.chu);
		printf(" 		* Bam phim bat ky de ket thuc * \n");
		getch();
	}