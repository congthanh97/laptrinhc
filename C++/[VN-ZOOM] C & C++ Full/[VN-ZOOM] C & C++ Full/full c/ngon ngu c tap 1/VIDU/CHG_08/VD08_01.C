

#include"stdio.h"
#include"stdlib.h"
main()
  {
	 int x,*px;
	 px=&x; /* dan xep cho lptr tro toi lvar */
	 *px=567;
	 clrscr();
	 printf("-Vi tri cua bien x la : %p \n",&x);
	 printf("*Noi dung cua bien x la :%d \n",x);
	 printf("-Vi tri cua bien con tro px la :%p \n",px);
	 printf("*Noi dung cua bien con tro px la : %d \n",*px);
	 getch();
  }