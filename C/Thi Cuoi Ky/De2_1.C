#include <stdio.h>
#include <conio.h>
#include <math.h>


void main(){
	float a,b,c,delta;
	clrscr();
	printf("\tGiai phuong trinh bac 2: ax2 + bx + c =0\n\n");
	printf(" Nhap he so a, b, c: ");
	scanf("%f %f %f",&a, &b, &c);
	if(a==0)
		printf("Day khong phai phuong trinh bac 2!.\n");
	else
	{
		delta = (b*b)-4*a*c;
		if (delta<0)	
			printf("Phuong trinh vo nghiem.\n");
		else	
			if (delta == 0)	
				printf("Phuong trinh co nghiem kep x = %6.2f \n",-b/(2*a));
			else
				printf("Phuong trinh co 2 nghiem phan biet.\n   x1 = %6.2f    x2 = %6.2f" ,
								(-b-sqrt(delta))/(2*a),(-b+sqrt(delta))/(2*a));
	}
	getch();
}
