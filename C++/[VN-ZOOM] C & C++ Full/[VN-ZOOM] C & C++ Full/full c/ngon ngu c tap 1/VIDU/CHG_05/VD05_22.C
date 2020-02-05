/* Chuong trinh 5 */
#include<stdio.h>
main()
	{
		char mk;
		clrscr();
		printf("\nCho biet mat khau : ");
		scanf("%s",&mk);
		while (mk !='m')
			{
				printf("\nCho biet mat khau : ");
				scanf("%s",&mk);
			}
		printf("Ban da go dung mat khau");
		getch();
	}