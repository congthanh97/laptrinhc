
#include"stdio.h"
long double gt(int i);
main()
  {
    int i,n;
    float s;
    printf("\n CHUONG TRINH TINH TONG NGHICH DAO \n");
    printf("\n    CUA n GIAI THUA DAU TIEN \n");
    printf("\n     Hay nhap vao so can tinh : ");
    scanf("%d",&n);
    s=0;
    for (i=1;i<=n;++i);
       s=s+1/gt(i);
		 printf("\n Tong nghich dao cua giai thua %d = %11.9f",n,s);
		 getch();
  }
long double gt(int i)
  {
    long double tempo;
    int k;
    tempo = 1;
    for (k=1;k<=i;k++)
      tempo=tempo*k;
      return (tempo);
  }