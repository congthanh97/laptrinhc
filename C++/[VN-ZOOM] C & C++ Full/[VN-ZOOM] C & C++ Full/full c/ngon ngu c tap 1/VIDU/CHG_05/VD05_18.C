/* Chuong trinh 1 */
#include<stdio.h>
int i=0;
main()
	{
		clrscr();
		printf("\nTheo chieu tang\n");
		while (i<10)
			{
				printf("\nHang thu %2d = %2d",i+1,i);
				++i;
			}
		getch();
	}
