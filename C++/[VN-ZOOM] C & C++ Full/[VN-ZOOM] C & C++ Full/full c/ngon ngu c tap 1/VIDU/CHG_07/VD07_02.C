

#include"stdio.h"
extern int A[];
main()
{
	int i;
	clrscr();
	for(i=0;i<=5;i++)
		cprintf("A[%d]=%d ",i,A[i]);
	getch();
}
int A[]={65,87,89,87,123,9};