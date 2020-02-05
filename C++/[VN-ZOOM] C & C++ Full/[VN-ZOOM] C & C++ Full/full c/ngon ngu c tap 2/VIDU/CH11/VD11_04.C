#include"stdio.h"
main()
	{
		FILE *f;   /* Dinh nghia tap tin va khai bao bien */
		clrscr();
		f=fopen("tucngu.txt","rt");  /* Mo tap tin van ban de doc */
		if (f==NULL)
			{
				printf("\n\tKhong mo duoc tap tin");
				perror("\n\tLy do ");
			}
		else
			{
				printf("\n\tDa mo duoc tap tin");
				fclose(f);
			}
		printf("\n\tBam phim bat ky de ket thuc");
		getch();
	}