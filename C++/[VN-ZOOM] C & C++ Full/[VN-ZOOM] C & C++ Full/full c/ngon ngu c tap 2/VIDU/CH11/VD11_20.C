#include"stdio.h"
main()
	{
		int a,b;
		float x,y;
		char ch[10];
		clrscr();
		printf("\nMO TA HAM SCANF();VOI DONG VAO KHAC NHAU\n");
		scanf("%3d%4d%3f%f%2s",&a,&b,&x,&y,ch);
		printf("\n\t  a=%10d",a);
		printf("\n\t  b=%10d",b);
		printf("\n\t  x=%8.2f",x);
		printf("\n\t  y=%8.2f",y);
		printf("\n\t ch=%s",ch);
		printf("\n\tBam phim bat ky de ket thuc");
		getch();
	}
