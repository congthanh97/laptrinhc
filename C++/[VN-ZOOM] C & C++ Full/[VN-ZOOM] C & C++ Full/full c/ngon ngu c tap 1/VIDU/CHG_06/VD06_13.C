

#include"stdio.h"
int a=678,b=654,c=432; /* khai bao bien ngoai */
main()
  {
	clrscr();
	printf("\nGia tri cua A=%d ,B=%d C=%d cua ham main() ",a,b,c);
	next();
	printf("\nCac gia tri cua bien ngoai va trong la giong nhau");
	getch();
  }
next()
  {
	 printf("\nGia tri cua A=%d ,B=%d C=%d cua ham next() ",a,b,c);
  }