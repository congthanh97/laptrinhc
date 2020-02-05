#include"string.h"
#include"stdio.h"
main()
	{
		char mot[100]="Tram nam trong coi nguoi ta";
		char hai[100]=" Chu tai chu menh kheo la ghet nhau";
		char ba[100]="Trai qua mot cuoc be dau";
		char bon[100]=" Nhung dieu trong thay ma dau dn long";
		clrscr();
		printf("\nCau \" %s\". Co chieu dai :%d ky tu ",mot,strlen(mot));
		printf("\nCau \" %s\". Co chieu dai :%d ky tu ",hai,strlen(hai));
		printf("\nCau \" %s\". Co chieu dai :%d ky tu ",ba,strlen(ba));
		printf("\nCau \" %s\". Co chieu dai :%d ky tu ",bon,strlen(bon));
		strcat(mot,hai);
		strcat(ba,bon);
		printf("\n");
		printf("\n PHEP CONG CHUOI KY TU \n");
		printf("\n + Dem cau 1 + cau 2");
		printf("\nHai cau %s",mot);
		printf("\n - Co chieu dai: %d ky tu :",strlen(mot));
		printf("\n");
		printf("\n + Dem cau 3 + cau 4");
		printf("\nHai cau %s",ba);
		printf("\n - Co chieu dai : %d ky tu",strlen(ba));
		getch();
	}
