#include"stdio.h"
main()
	{
		float a[8][6];
		int i,j;
		clrscr();
		fprintf(stdprn,"\n IN MA TRAN A[8][6] RA MAY IN");
		fprintf(stdprn,"\n%20c MA TRAN A\n\n\n",'');
		for (i=0; i<8; ++i)
			{
				for (j=0; j<6; ++j)

						fprintf(stdprn,"%10.2f",a[i][j]);
						fprintf(stdprn,"\n");
			}
	}