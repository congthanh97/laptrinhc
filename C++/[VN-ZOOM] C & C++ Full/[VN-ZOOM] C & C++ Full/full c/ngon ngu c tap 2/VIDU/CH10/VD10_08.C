#include"stdio.h"
main()
	{
		struct
			{
				int a,b;
			}doi_so;
		doi_so.a=1234;
		doi_so.b=4321;
		f1(doi_so);
		clrscr();
		printf("\n Doi so 1 = %d",doi_so.a);
		printf("\n Doi so 2 = %d",doi_so.b);
	}
f1(tham_so)
struct
	{
		int x,y;
	}tham_so;
	{
		printf("\n Tham so 1 = %d",tham_so.x);
		printf("\n Tham so 2 = %d",tham_so.y);
		getch();
	}