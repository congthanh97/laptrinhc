#include <stdio.h>
#include <conio.h>

// 	Kiem tra so ngay cua nam


void main(){
	int month, year;
	clrscr();
	printf("\t Kiem tra so ngay cua thang trong nam.\n\n");
	printf(" Nhap thang, nam: ");
	scanf("%d %d", &month, &year);
	
	printf("  Thang %d/%d co: ",month,year);
	
	switch (month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: printf("31 ngay.\n"); break;
        case 2: 
            if (((year %4 ==0) && (year %100 !=0) )|| (year%400 ==0)) printf("29 ngay.\n");
            else printf("28 ngay.\n");
            break;      
        case 4:
        case 6:
        case 9:
        case 11: printf("30 ngay.\n"); break;    
    }
    getch();
}