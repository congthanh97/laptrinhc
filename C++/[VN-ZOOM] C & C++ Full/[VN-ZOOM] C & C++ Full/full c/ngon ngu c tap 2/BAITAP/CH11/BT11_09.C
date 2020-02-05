#include"stdio.h"
main()
	{
		FILE *f;
		int k;
		int dong=1;
		printf("\n\t DOC DU LIEU TU TAP TIN");
		f=fopen("songuyen.dat","rt");
		for (k=0; k<100; k++)
			{
				fscanf(f,"%3d",&k);
				printf("\n%3d",k);
				dong++;
				if (dong >23)
					{
						printf("\nBam phim bat ky de xem tiep");
						getch();
						clrscr();
						dong=1;
						printf("\n\t DOC DU LIEU TU TAP TIN");
					}
			}
		fclose(f);
		printf("\n  Bam phim bat ky de ket thuc");
		getch();
	}