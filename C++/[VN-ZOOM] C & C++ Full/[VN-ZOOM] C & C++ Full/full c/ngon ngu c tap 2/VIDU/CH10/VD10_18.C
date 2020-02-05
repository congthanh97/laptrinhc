#include"stdio.h"
#include"string.h"
typedef struct  /* Dinh nghia kieu du lieu tu tao */
	{
		char ten[24]; /* truong ho ten */
		int nam;      /* truong nam sinh */
	}tu_tao;
main()
	{
		tu_tao M[2];
		int i;
		clrscr();
		printf("\n           DINH NGHIA KIEU DU LIEU TU TAO");
		for (i=0; i<2; i++); /*Thiet lap tri ban dau cho cac bien */
		memset(&M[0],'\0',sizeof(tu_tao)); /* Cau truc la rong */
		strcpy(M[0].ten,"Nguyen Van Xuan");/* Cap du lieu cho */
		M->nam=1975;                /* phan tu dau tien */
		memcpy(&M[1],&M[0],sizeof(tu_tao));/* Sao chep noi dung */
				/*cua phan tu thu nhat sang phan tu thu hai */
		printf("\n-Noi dung cua bien cau truc 1  =%s, sinh nam (%d)",
										M[0].ten,M[0].nam);
		printf("\n-Sao chep sang bien cau truc 2 =%s, sinh nam (%d)",
										M[1].ten,M[1].nam);
		getch();
	}
