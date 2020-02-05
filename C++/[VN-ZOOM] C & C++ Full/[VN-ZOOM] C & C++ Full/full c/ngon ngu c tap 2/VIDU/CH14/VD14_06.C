#include"stdio.h"
#include"ctype.h"
main()
	{
		char ch;
		int i;
		clrscr();
		printf("\n-Bam cac phim bat ky tren ban phim");
		printf("\n-Bam phim <enter> de xem ket qua\n");
		for (i=1;i<20 ; i++)
			{
				ch=getchar();
				if (ch==' ')
					break;
				if (islower(ch))
					printf("%c la phim ky tu chu in thuong\n",ch);
			}
		printf("-Bam phim <Enter> de ket thuc");
		getch();
	}
