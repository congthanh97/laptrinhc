

#include"stdio.h"
#include"stdlib.h"
#define MAX 10
int a[MAX],b[MAX],c[MAX],i;
main()
  {
    randomize();
    printf("\n             Tao mang a ");
    for(i=0;i<MAX;i++)
      a[i]=3*i+5;
      printf("\n        Da tao xong mang a");
      printf("\nBam phim bat ky de gan mang a cho mang b");
      getch();
      memmove(b,a,sizeof(a));
      for(i=0;i<MAX;i++)
      printf("\n Ta co a[%d] = %2d va b[%d] = %2d",i,a[i],i,b[i]);
      printf("\n      Da gan xong.Bam phim bat ky de ");
	  printf("\nchep tu phan tu thu 4 cua mang a sang mang c");
      getch();
      memmove(c,a+4,sizeof(a));
      for (i=0;i<MAX-4;i++)
      printf("\nTa co a[%d]= %2d va c[%d]= %2d",i,a[i],i,c[i]);
      printf("\nHay quan sat ket qua de hieu cach gan tri cho mang");
      getch();
  }