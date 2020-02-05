#include"stdio.h"
main()
	{
		int a;
		float x,y;
		char ch[6],ct[6];
		clrscr();
		printf("\nMO TA VE KICH THUOC CUA dd\n");
		scanf("%f%5f%3d %3s %s",&x,&y,&a,ch,ct);
		printf("\n\tX=%f",x);
		printf("\n\tY=%5f",y);
		printf("\n\tA=%3d",a);
		printf("\n\tCH=%3s",ch);
		printf("\n\tCT=%s",ct);
		printf("\n\tBam phim bat ky de ket thuc");
		getch();
	}
