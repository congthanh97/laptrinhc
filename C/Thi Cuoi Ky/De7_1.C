#include <stdio.h>
#include <conio.h>

void main(){
   float GDP,goc,tocdo;
   int nam;
   printf("\nNhap GDP(2010): ");
   scanf("%f",&GDP);
   printf("Toc do tang truong(%): ");
   scanf("%f",&tocdo);
   nam = 2010;
   goc = GDP;
   printf("Nam\tGDP\n");

   do{
	 printf("%d\t%.2f\n",nam++,GDP);
	 GDP += GDP * ((float )tocdo/100);
   }while(GDP <2*goc);
   getch();
}
