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
				if (isalpha(ch))
					printf("%c la ky tu\n",ch);
			}
		printf("-Bam phim <Enter> de ket thuc");
		getch();
	}
