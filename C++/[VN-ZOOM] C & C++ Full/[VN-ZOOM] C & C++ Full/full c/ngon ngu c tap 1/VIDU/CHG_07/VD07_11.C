
#include"stdio.h"
#include"stdlib.h"
#define MAX 1000
int a[MAX],i;
sosanh(int *p,int *q)
  {
    if (*p<*q)
       return-1;
	else
		if (*p==*q)
			 return 0;
		else
			return 1;
  }
main()
  {
    randomize();
    printf("\nBam phim bat ky de khoi tao mang ngau nhien");
    getch();
    for (i=0;i<MAX;a[i++]=random(30000));
      for (i=0;i<MAX;printf("%8d",a[i++]));
			printf("\nBam phim bat ky de bat dau sap xep\n");
      printf("\nDang sap xep. Xin cho doi !\n");
	  qsort(a,MAX,2,sosanh);
	  printf("\nDa sap xep xong\n");
	  printf("\nBam phim bat ky de xem ket qua sap xep \n");
	  getch();
	  for(i=0;i<MAX;printf("%8d",a[i++]));
	  getch();
  }