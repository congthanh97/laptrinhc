

#include"stdio.h"
more()
{
	int k=0;
	printf("\nGia tri cua k = %d",k++);
}
main()
{
	int k;
	for (k=50;k<70;k++);
		more();
	getch();
}