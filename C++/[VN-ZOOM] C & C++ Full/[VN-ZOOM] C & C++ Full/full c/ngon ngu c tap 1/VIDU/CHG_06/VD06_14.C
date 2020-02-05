

#include"stdio.h"
int a=678,b=654,c=432;
main()
  {
	static int a,b; /* che 2 bien a,b */
	clrscr();
	printf("\nDung static de che bien chung a , b");
	printf("\nGia tri cua A=%d ,B=%d ,C=%d trong ham main()",a,b,c);
	next();
	getch();
  }
next()
  {
	 printf("\nGia tri cua A=%d ,B=%d ,C=%d trong ham next() ",a,b,c);
  }