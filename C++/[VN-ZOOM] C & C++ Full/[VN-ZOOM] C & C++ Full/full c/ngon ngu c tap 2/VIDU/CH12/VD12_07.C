#include"conio.h"
char phim;
main()
	{
		do
			{
				phim=getch();
				if (phim==0)
					phim=getch();
				cprintf("\n\r-Ban vua bam phim : %c, co ma= %3d",
							phim,phim);
			}
		while (phim!=27);
	}