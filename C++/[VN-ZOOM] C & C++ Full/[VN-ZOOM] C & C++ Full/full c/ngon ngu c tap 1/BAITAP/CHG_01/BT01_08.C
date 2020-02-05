
#include <stdio.h>
main()
{
 int a,b,tong,hieu,tich;  /*Khai bao 4 bien so nguyen */
 float thuong;  /* Khai bao bien so thuc */
 clrscr();     /* Lenh xoa man hinh */
 printf("Nhap so thu nhat : ");
 scanf("%d",&a);    /* Lenh nhap so lieu tu ban phim va gan cho bien */
 printf("Nhap so thu hai : ");
 scanf("%d",&b);
 tong = a+b;
 hieu = a-b;
 tich= a*b;
 thuong= (float)a/b; /* Chuyen doi kieu so nguyen sang so thuc */
 printf("\n");
 printf("Tong cua 2 so a=%d   va b=%d la=%d\n",a,b,tong);
 printf("Hieu cua 2 so a=%d   va b=%d la=%d\n",a,b,hieu);
 printf("Tich cua 2 so a=%d   va b=%d la=%d\n",a,b,tich);
 printf("Thuong cua 2 so a=%d va b=%d la=%f\n",a,b,thuong);
 getch();
 }