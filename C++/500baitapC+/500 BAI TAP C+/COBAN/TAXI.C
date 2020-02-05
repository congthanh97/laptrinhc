/* Bai tap 4_3 - Chuong trinh tinh cuoc TAXI */
#include <stdio.h>
#include <math.h>
#include <conio.h>
void main()
{
  unsigned long sotien;
  float sokm;
  clrscr();
  printf("\nBan hay cho biet so km da di duoc : ");
  scanf("%f", &sokm);

  if (sokm <= 1.0)
    sotien = 5000;
  else if (sokm <= 30.0)
         sotien = 5000 + floor((sokm - 1.0) * 5.0) * 1000;
       else
         sotien = 150000 + (ceil(sokm) - 30) * 3000;
  printf("\nSo tien can tra = %lu", sotien);

  getch();
}