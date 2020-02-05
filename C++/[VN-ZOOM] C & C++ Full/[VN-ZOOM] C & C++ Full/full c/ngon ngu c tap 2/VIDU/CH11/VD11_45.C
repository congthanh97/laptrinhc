#include"stdio.h"
main()
	{
		float a[8][6];
		int i,j;
		clrscr();
		printf("\n             IN MA TRAN A[8][6] RA MAN HINH");
		printf("\n%20c MA TRAN A\n\n\n",'');
		for (i=0; i<8; ++i)
			{
				for (j=0; j<6; ++j)

						printf("%10.2f",a[i][j]);
						printf("\n");
			}
		printf("\n   Bam phim bat ky de ket thuc");
		getch();
	}