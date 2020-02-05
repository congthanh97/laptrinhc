
#include"stdio.h"
more()
{
	static int k=0; /* them tu khoa static */
	printf("\nGia tri cua k = %d",k++);
}
main()
{
	int k;
	for (k=50;k<70;k++);
		more();
	getch();
}