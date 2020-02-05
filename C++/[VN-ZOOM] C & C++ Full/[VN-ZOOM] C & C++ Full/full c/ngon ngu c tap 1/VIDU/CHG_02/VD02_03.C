/* Minh hoa cach dung cac hang */
#include"stdio.h" /* Khong can khai bao cung duoc */
#include"stdlib.h"  /* Khong can khai bao cung duoc */
main()
	{
		printf("\nHang so thuc :%10.2f%10.2f%10.2f%10.2f",
		   14689.e-4,-0.125666E3,23468E-2,1e4);
		printf("\nHang nguyen :%10ld%10ld%6ld%6ld%6d",
		   45639846l,45639846,35L,35,-123);
		printf("\nHang nguyen he 8 va he 16 :%7d %7d %7d %7d %7d",
		   0345,0xa9,0xA9,0Xa9,0XA9);
		   /* In hang ky tu dung dac ta %[fw]c */
		printf("%c%c%6c%6c%6c%6c%6c",'\n','\n','a','\141',
		   '\'','\"','\\');
		   /* In chuoi ky tu dac ta */
		printf("\n\n%10c%10s",'',"Chuc may man");
		getch();
	}