#include"stdio.h"
#include"math.h"
#define PI atan(1)*4
#define rad(k)((k)*PI/180)
FILE *f;
int k;
float s,c,t,ct;  /* sin,cos,tan,cotan */
main()
	{
		clrscr();
		printf("\n\tCHUONG TRINH TAO BANG LUONG GIAC");
		f=fopen("lg_giac.txt","wt"); /* Mo tap tin luong giac */
		for (k=1; k<90; k++)
			{
				s=sin((double)rad(k));  /* Tinh sin(k) */
				c=cos((double)rad(k));  /* Tinh cos(k) */
				t=s/c;                  /* Tinh tan(k) */
				ct=1/t;                 /* Tinh cotan(k) */
				 /* Dung ham fprintf(); de ghi vao tap tin LG_GIAC.TXT */
				fprintf(f,"\n%2d %10.8f %10.8f %10.8f %10.6f %10.6f",
															k,rad(k),s,c,t,ct);
			}
		fclose(f); /* Dong tap tin LG_GIAC.TXT */
		printf("\n\tDa tao tap tin LG_GIAC.TXT tren dia");
		printf("\n\tBam phim bat ky de ket thuc");
		getch();
	}
