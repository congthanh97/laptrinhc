

#include"stdio.h"
#define COT 2
#define DONG 10
extern int a[][DONG];
main()
  {
    int i,j;
    printf("\n");
	 for(i=0;i<COT;i++);
		for(j=0;j<DONG;j++)
			printf("a[%d\,%d]=%d\t",i,j,a[i][j]);
    getch();
  }
int a[][DONG]={{2,6,8,9,7,8,8,9,9,6},{3,4,5,6,7,7,8,3,5,5}};
