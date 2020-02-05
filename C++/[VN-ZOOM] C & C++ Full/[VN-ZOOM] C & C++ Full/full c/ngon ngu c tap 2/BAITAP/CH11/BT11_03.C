#include"stdio.h"
main()
	{
		char ten_cu[79],ten_moi[79];
		clrscr();
		printf("\nDOI TEN TAP TIN TRONG THU MUC CHI DINH");
		printf("\n-Cho biet ten tap tin can doi ten: ");
		gets(ten_cu);
		printf("\n-Doi ten thanh: ");
		gets(ten_moi);
		if (rename(ten_cu,ten_moi))
			perror("Khong doi ten duoc, vi: ");
		else
			printf("\nDa doi ten tap tin: %s thanh: %s",ten_cu,ten_moi);
		printf("\n  Bam phim bat ky de ket thuc");
		getch();
	}