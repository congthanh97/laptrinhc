
#include"stdio.h"
#include"stdlib.h"
int a[1000];
int i;
sapxep(int l, int r)
  {
    int i,j,x,y;
    i=l;j=r;x=a[(l+r)/2];
    do
      {
			while(a[i]<x) i=i+1;
			while(x<a[j]) j=j-1;
			if (i<=j)
			  {
				y=a[i];
				a[i]=a[j];
				a[j]=y;
				i++;
				j--;
			  }
      }
    while (i<=j);
	if (l<j)
		sapxep(l,j);
	if (i<r)
		sapxep(i,r);
  }

  main()
  {
	 printf("Khoi tao 1000 so ngau nhien...");
    randomize();
    for(i=0;i<1000;i++)
      a[i]=random(30000);
      printf("\n");
		printf("\Sap xep cac so ngau nhien...");
      printf("\nBam phim bat ky de bat dau sap xep\n");
      getch();
		sapxep(0,1000-1);
      printf("\n");
      for (i=0;i<1000;i++)
		printf(" %8d ",a[i]);
		getch();
  }