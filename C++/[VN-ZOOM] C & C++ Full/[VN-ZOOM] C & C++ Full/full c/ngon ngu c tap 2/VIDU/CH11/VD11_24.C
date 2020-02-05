#include"stdio.h"
main()
	{
		char s1[10],s2[10],s3[20],s4[20];
		clrscr();
		printf("\nSU DUNG DAC TA KY TU\n");
		printf("\n\t-Nhap vao mot day ky tu: ");
		scanf("%3s%s%[^,]%[123456789,]",s1,s2,s3,s4);
		printf("\n\t  s1=%s",s1);
		printf("\n\t  s2=%s",s2);
		printf("\n\t  s3=%s",s3);
		printf("\n\t  s4=%s",s4);
		printf("\n\tBam phim bat ky de ket thuc");
		getch();
	}
