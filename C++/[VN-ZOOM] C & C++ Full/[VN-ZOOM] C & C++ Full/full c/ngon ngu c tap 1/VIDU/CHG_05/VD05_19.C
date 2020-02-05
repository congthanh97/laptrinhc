/* Chuong trinh 2 */
#include<stdio.h>
int i=10;
main()
	{
		clrscr();
		printf("\nTheo chieu giam\n");
		while (i) /* Khi i con khac 0 */
			{
				printf("\nHang thu %2d = %2d",i,i-1);
				--i;
			}
		getch();
	}
