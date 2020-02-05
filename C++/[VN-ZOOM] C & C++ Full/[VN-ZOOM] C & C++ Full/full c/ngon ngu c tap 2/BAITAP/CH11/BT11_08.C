#include"stdio.h"
main()
	{
		FILE *f;
		int k;
		printf("\n GHI DU LIEU VAO TAP TIN");
		f=fopen("songuyen.dat","wt");
		for (k=0; k<=100; k++)
			{
				fprintf(f,"%3d\n",k);
				k++;
			}
		fclose(f);
		printf("\n  Bam phim bat ky de ket thuc");
		getch();
	}