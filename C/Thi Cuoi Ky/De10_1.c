#include <stdio.h>
#include <conio.h>

void main(){
	clrscr();
	long n,i,lthua=1;
	printf("Nhap n= ");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
		lthua *= i;
	printf(" %d! = %d",n,lthua);
	getch();
}