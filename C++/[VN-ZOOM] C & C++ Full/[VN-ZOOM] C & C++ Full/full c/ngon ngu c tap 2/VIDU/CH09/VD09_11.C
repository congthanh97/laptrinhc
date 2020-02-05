#include"string.h"
#include"stdio.h"
main()
	{
		char *hoten="Nguyen Van Xuan";
		char *holot="Nguyen Van";
		clrscr();
		printf("\n PHEP TRU CHUOI KY TU \n");
		printf("\n Ho ten day du la : %s",hoten);
		printf("\n Ho lot la : %s",holot);
		printf("\n Dem Ho ten - Ho lot = Ten");
		printf("\n Ten nguoi nay la : %s",hoten+strspn(hoten,holot));
		getch();
	}
