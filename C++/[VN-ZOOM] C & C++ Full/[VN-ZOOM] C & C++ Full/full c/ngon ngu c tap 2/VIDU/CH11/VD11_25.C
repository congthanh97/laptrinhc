#include"stdio.h"
main()
	{
		int a;
		long b;
		char ch[20],ck[20];
		clrscr();
		printf("\nSU DUNG DAC TA SO VA KY TU\n");
		printf("\n\t-Nhap a(so),ch,ck(chuoi) va b (so): ");
		scanf("%3d%[0123456789 ]%[^0123456789 ]%5ld",&a,ch,ck,&b);
		printf("\n\t   a=%3d",a);
		printf("\n\t   b=%10ld",b);
		printf("\n\t  ch=%s",ch);
		printf("\n\t  ck=%6s",ck);
		printf("\n\tBam phim bat ky de ket thuc");
		getch();
	}
