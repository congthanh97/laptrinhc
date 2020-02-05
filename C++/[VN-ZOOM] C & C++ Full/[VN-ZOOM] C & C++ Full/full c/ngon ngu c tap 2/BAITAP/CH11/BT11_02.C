#include"stdio.h"
main()
	{
		char duong_dan[79];
		printf("\nXOA TAP TIN TRONG THU MUC CHI DINH");
		printf("\n-Cho biet ten tap tin can xoa: ");
		gets(duong_dan);
		if (remove(duong_dan))
			perror("Khong xoa duoc, vi: ");
		else
			printf("\nDa xoa tap tin: %s",duong_dan);
		printf("\n  Bam phim bat ky de ket thuc");
		getch();
	}