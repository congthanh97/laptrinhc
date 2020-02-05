

#include"stdio.h"
float max3s(a,b,c) /*bat dau ham max3s */
float a,b,c;
{
  float max;
  max=a>b ? a:b;
  return (max>c ? max:c);
}
#include"stdio.h"
main()
{
  float x,y,z,max3s();
  int s;
  tt:printf("\nNhap 3 so ");
  printf("\n-So thu nhat = ");
  scanf("%f",&x);
  printf("\n-So thu hai = ");
  scanf("%f",&y);
  printf("\n-So thu ba = ");
  scanf("%f",&z);
  printf("\n* Trong 3 so");
  printf("\nX=%8.2f",x);
  printf("\nY=%8.2f",y);
  printf("\nZ=%8.2f",z);
  printf("\n* So lon nhat la = %8.2f",max3s(x,y,z));
  getch();
}