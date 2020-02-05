

#include"stdio.h"
main()
{
  ve('=',20);
  ve('A',20);
  ve('B',20);
  ve('C',20);
  ve('=',20);
  getch();
}
ve(char chu,int lan)
 {
   int i;
   for (i=1;i<=lan;i++)
   putchar(chu);
   printf("\n" );
 }