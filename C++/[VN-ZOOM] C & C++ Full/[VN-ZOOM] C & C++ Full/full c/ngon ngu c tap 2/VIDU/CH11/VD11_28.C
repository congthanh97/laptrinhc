#include"stdio.h"
FILE *f;
int k;
float rad,s,c,t,ct;
char g='|';
main()
	{

		int goc;
		f=fopen("lg_giac.txt","rt");
		for (k=1; k<90; k++)
			{
				fscanf(f,"%d %f %f %f %f %f",&goc,&rad,&s,&c,&t,&ct);
				printf("\n%c%2d%c%10.8f%c%10.8f%c%10.8f%c%10.6f%c%10.6f%c",
												g,goc,g,rad,g,s,g,c,g,t,g,ct,g);
			}
		fclose(f);
		printf("\n\tDa doc (xuat) xong tap tin LG_GIAC.TXT");
		printf("\n\tBam phim bat ky de ket thuc");
		getch();
	}
