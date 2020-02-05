

#include"stdio.h"
#include"stdlib.h"
#define MAX 1000
int a[MAX],i,j,tam;
main()
  {
    randomize();
    printf("\n Tao mot mang gom 1000 phan tu ngau nhien");
    printf("\nBam phim bat ky de bat dau tao mang ngau nhien ");
    getch();
    for (i=0;i<MAX;a[i++]=random(30000));
    for (i=0;i<MAX;printf("%8d",a[i++]));
    printf("\n Dang sap xep mang .Xin cho doi ! ");
    for (i=0; i<MAX;i++)
      for(j=i+1;j<MAX;j++)
			if (a[j]<a[i])
				{
					tam=a[j];
					a[j]=a[i];
					a[i]=tam;
				}
     printf("\n Da sap xep xong.Bam phim bat ky de xem ket qua ! : \n\r ");
     getch();
	 for (i=0;i<MAX;printf("%8d",a[i++]));
	 getch();
  }