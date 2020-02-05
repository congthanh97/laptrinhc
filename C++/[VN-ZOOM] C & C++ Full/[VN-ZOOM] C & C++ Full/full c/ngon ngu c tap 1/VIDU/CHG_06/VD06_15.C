
#include"stdio.h"
extern int a,b,c;

main()
  {
	printf("\nGia tri cua A=%d ,B=%d ,C=%d cua ham main()",a,b,c);
	next();
	getch();
  }
int a=678,b=654,c=432;
next()
  {
	 printf("\nGia tri cua A=%d ,B=%d ,C=%d cua ham next()",a,b,c);
  }