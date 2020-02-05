
#include<conio.h>
main()
{
  int i,j,a[2][4]={1,2,3,4,5,6,7,8};
  clrscr();
  for (i=0;i<2;i++)
	{
	  for (j=0;j<4;j++)
		 {
			 printf("a[%d,%d]=%d  ",i,j,a[i][j]);
		 }
	  printf("\n");
	 }
  getch();
}