/* Chuong trinh Tinh chu vi va dien tich hinh tron */
#include "stdio.h"
main()
  {
  float r,c,s;
  printf("- Cho biet ban kinh  r= ");
  scanf("%f",&r);
  c=6.28*r;
  s=3.14*r*r;
  /*In ket qua tren 3 dong*/
  clrscr();
  printf("              KET QUA TINH CHU VI DIEN TICH HINH TRON \n");
  printf("              -Ban kinh hinh tron  r = %8.2f met \n",r);
  printf("              -Chu vi hinh tron    c = %8.2f met \n",c);
  printf("              -Dien tich hinh tron s = %8.2f met vuong \n",s);
  getch();
  }