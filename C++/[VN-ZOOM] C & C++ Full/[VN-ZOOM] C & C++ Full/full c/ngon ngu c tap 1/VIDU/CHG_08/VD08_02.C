

#include"stdio.h"
main()
  {
	 int k,a[10],*p,*q;
	 for (k=0;k<10;k++)
		a[k]=3*k+5;
	 p=a; /* p tro toi a */
	 q=p; /* q tro toi vung ma p tro toi */
	 printf("\n");
	 for(k=0;k<10;k++)
		printf("%8d",*(q+k));
	 p=q+2;
	 for(k=0;k<10;k++)
		printf("%8d",*(p+k));
	 getch();
  }