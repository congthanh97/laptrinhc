

#include"stdio.h"
typedef char name[8];
main()
{
  name a[12]={"Ty","Suu","Dan","Mao","Thin","Ti",
  "Ngo","Mui","Than","Dau","Tuat","Hoi"};
  int k;
  name *p;
  p=a;
  clrscr();
  for(k=0;k<=11;k++)
  printf("\n%30c %s ",' ',*(p+k));
  getch();
}