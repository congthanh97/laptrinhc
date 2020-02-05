/* Chuong trinh 3 */
#include<stdio.h>
#include<math.h>
main()
	{
		float a,b,c,denta;
		clrscr();
		printf("\nGIAI PHUONG TRINH BAC 2");
		printf("\n     aX2 -bX + C = 0");
		do
			{
				printf("\nNhap he so a = ");
				scanf("%f",&a);
			}
		while (a == 0);
		printf("\nNhap he so b = ");
		scanf("%f",&b);
		printf("\nNhap he so c = ");
		scanf("%f",&c);
		if ((denta=b*b-4*a*c) <0)
			printf("\nPhuong trinh vo nghiem");
		else
			if (denta == 0)
				printf("\nPhuong trinh co nghiem kep X1=X2= %8.2f ",-b/(2*a));
			else
				{
					denta=sqrt((double)denta);
					printf("\nPhuong trinh co 2 nghiem");
					printf("\nX1=%8.2f",(-b-denta)/(2*a));
					printf("\nX2=%8.2f",(-b+denta)/(2*a));
				}
		getch();
	}
