#include"stdio.h"
#include"alloc.h" /* Khai bao bien con tro */
main()
	{
		char *chuoi;
		chuoi=calloc(40,sizeof(char)); /* Cap phat vung nho */
		chuoi="Chao ban ! Ban co khoe khong ?";
		printf("\n*%s*",chuoi);
		getch();
	}