
/*Chuong trinh tinh x luy thua y*/
#include"stdio.h"
#include "math.h"
main()
{
  double pow();     /*khai bao ham pow kieu double*/
  double x,y,z;     /* khai bao 3 bien  kieu double*/
  clrscr();
  printf("- Cho biet gia tri cua X= ");
  scanf("%lf",&x);
  printf("- Cho biet gia tri cua Y= ");
  scanf("%lf",&y);
  z=pow(x,y); /* Tinh x luy thua y va gan cho z */
  /* In ket qua */
  clrscr();
  printf("KET QUA CUA CHUONG TRINH TINH X LUY THUA Y \n");
  printf("-             X= %8.2f \n",x);
  printf("- Mu          Y= %8.2f \n",y);
  printf("* X luy thua y = %8.2f",z);
  getch();
}