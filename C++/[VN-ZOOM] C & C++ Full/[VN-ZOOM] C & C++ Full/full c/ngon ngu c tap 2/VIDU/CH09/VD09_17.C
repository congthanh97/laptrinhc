#include"stdio.h"
#include"string.h"
main()
	{
		char chuoi[100];
		int vitri;
		clrscr();
		printf("\n Nhap vao 1 chuoi : ");
		gets(chuoi);
		printf("\ Cho biet vi tri ky tu can xoa :");
		scanf("%d",&vitri);
		xoa_kytu(chuoi,(vitri-1));
		printf("\n Sau khi xoa, con lai chuoi :");
		puts(chuoi);
		getch();
	}
xoa_kytu(str,n) /* Dinh nghia 1 ham xoa ky tu */
	char str[];
	int n;
		{
			strcpy(&str[n],&str[n+1]);
		}
