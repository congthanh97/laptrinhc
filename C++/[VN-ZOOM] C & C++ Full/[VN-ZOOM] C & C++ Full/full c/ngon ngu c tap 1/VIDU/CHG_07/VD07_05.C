

#include"stdio.h"
main()
{
  int a[][2]={{4,5},{6,7},{12,6},{6,9},{5,6}};
  int b[][2]={{6,7},{8,9},{9,6},{5,6},{67,45}};
  int k,j;
  clrscr();
  for (k=0;k<5;k++)
	{
		for (j=0;j<2;j++)
			{
				printf("\na[%d\,%d]=%d",k,j,a[k][j]);
				printf("\nb[%d\,%d]=%d",k,j,b[k][j]);
			}
		printf("\n");
	}
  getch();
}