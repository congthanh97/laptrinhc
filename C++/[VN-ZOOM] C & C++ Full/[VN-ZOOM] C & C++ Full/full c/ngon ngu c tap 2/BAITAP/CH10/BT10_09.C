#include"stdio.h"
typedef struct
	{
		char *hoten;
		char diachi[40];
		long luong;
	}nguoi, *contro;

nguoi M[]={"Tran Thi Thuy","67 Ngo Gia Tu, Quan 11",65478,
				"Tran Thi Thuy Tien","546 Hai Ba Trung, Quan 1",67543,
				"Nguyen Thi Nhu Y","43 Ngo Quyen, Quan Binh Thanh",76433,
				"Tran Thanh Mai","56 Nguyen Thi Minh Khai, Quan 1",54678,
				"Tran Van Hung","67 Nguyen Trung Truc, Quan 1",78654,
				"Bui Ta Hai","55A Nguyen Thi Minh Khai, Quan 1",98765};
char *ten(char *s)
	{
		char k;
		for (k=strlen(s)-1; s[k]!=' '; k++);
			return(s+k+1);
	}
so_sanh(contro p,contro q)
	{
		int k;
		k=strcmp(ten(p->hoten), ten(q->hoten));
		if (k)
			return k;
		else
			return(strcmp(p->hoten, q->hoten));
	}
void hien_thi(contro ct)
	{
		printf("\n\t----------------------------------------");
		printf("\n\t -Ong (Ba)      : %s",ct->hoten);
		printf("\n\t -Dia chi       : %s",ct->diachi);
		printf("\n\t * Luong thang  = %ld",ct->luong);
	}
main()
	{
		char k;
		clrscr();
		for (k=0; k<6; k++)
			hien_thi(&M[k]);
		printf("\n\t----------------------------------------");
		printf("\n\t Bam phim bat ky de sap xep ");
		getch();
		qsort(M,6,sizeof(nguoi),so_sanh);
		for (k=0; k<6; k++)
			hien_thi(&M[k]);
		printf("\n\t----------------------------------------");
		printf("\n\t Bam phim bat ky de ket thuc");
		getch();
	}