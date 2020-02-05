#include<math.h>
float ptb2(a,b,c,x1,x2)
float a,b,c,*x1,*x2;
	{
		double sqrt();
		float delta;
		if (a==0)
			return(0);
		delta=b*b-4*a*c;
		if (delta < 0)
			return(-1);
		*x1=(-b+sqrt((double)delta))/(2*a);
		*x2=(-b-sqrt((double)delta))/(2*a);
		return(1);
	}
#include<stdio.h>
main()
	{
		int s;
		float a,b,c,x1,x2;
		printf("\nNhap he so A= ");
		scanf("%f",&a);
		printf("\nNhap he so B= ");
		scanf("%f",&b);
		printf("\nNhap he so C= ");
		scanf("%f",&c);
		s=ptb2(a,b,c,&x1,&x2);
		if (s==0)
			{
				printf("\nVi he so a=0 nen tro thanh phuong trinh bac nhat");
				printf("\nBam phim bat ky de ket thuc");
				getch();
				exit();
			}
		else
			if (s ==-1)
				{
					printf("\nVi delta < 0 nen phuong trinh vo nghiem");
					printf("\nBam phim bat ky de ket thuc");
					getch();
					exit();
				}
			else
				printf("\nPhuong trinh co 2 nghiem");
				printf("\nNghiem thu nhat x1= %8.2f",x1);
				printf("\nNghiem thu hai  x2= %8.2f",x2);
		getch();
	}