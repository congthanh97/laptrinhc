#include"stdio.h"
union kieu_union
	{
		int i;
		char ch[2];
	};
	union kieu_union uni;
main()
	{
		union kieu_union j;
		uni.i=0X1020;
		hien_thi(&uni);
	}
hien_thi(so)
union kieu_union *so;
	{
		clrscr();
		printf("\n\n    CHUONG TRINH MINH HOA SU DUNG UNION\n");
		printf("-Hien thi tri 16 (thap luc) cua Byte thap : %X\n",so->ch[0]);
		printf("-Hien thi tri 16 (thap luc) cua Byte cao  : %X\n",so->ch[1]);
		printf("\n       Bam phim bat ky de ket thuc");
		getch();
	}
