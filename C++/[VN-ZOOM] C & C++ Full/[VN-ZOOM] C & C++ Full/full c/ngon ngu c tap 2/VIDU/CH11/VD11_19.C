#include"stdio.h"
main()
	{
		int a,b;
		char ch[10],ck[10];
		clrscr();
		printf("\nMO TA VE DINH DANG CHUOI\n");
		scanf("%d %[0123456789]%[^0123456789]%3d",&a,ch,ck,&b);
		printf("\n\t A=%d",a);
		printf("\n\tCH=%[0123456789 ]",ch);
		printf("\n\tCK=%[^0123456789]",ck);
		printf("\n\t B=%3d",b);
		printf("\n\tBam phim bat ky de ket thuc");
		getch();
	}
