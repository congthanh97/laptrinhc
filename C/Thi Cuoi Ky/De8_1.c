#include <stdio.h>
#include <conio.h>

void main(){
	
	float a,b,c,d,e,f,dx,dy,delta;
	
	printf("\t Giai he phuong trinh bac nhat 2 an. \n");
	printf("\t\t ax + by = c \n");	
	printf("\t\t dx + ey = f \n\n");
	
	printf(" Nhap he so a, b, c: ");
	scanf("%f %f %f", &a, &b, &c);
	printf(" Nhap he so d, e, f: ");
	scanf("%f %f %f", &d, &e, &f);
	
	delta  = a*e - b*d;
	dx = c*e - b*f;
	dy = a*f - d*c;
	if (delta!=0)
		printf("He phuong trinh co nghiem duy nhat x = %6.2f  y = %6.2f \n",dx/delta,dy/delta);
	else
		if ((dx==0) && (dy==0))
			printf("He phuong trinh co vo so nghiem.\n");
		else 
			printf("He phuong trinh vo nghiem.\n");
	getch();
}