	/* Phep toan xu ly tren bit */
	#include<stdio.h>
	main()
	{
		int i,j;
		clrscr();
		printf("\nNhap so thu nhat (i) = ");
		scanf("%d",&i);
		printf("\nNhap so thu hai (j) = ");
		scanf("%d",&j);
		printf("\nPhep ~%d : %d ",i,~i);
		printf("\nSo %d & %d : %d (He 10)",i,j,i&j);
		printf("\nSo %d & %d : %o (He 8)",i,j,i&j);
		printf("\nSo %d & %d : %X (He 16)",i,j,i&j);
		printf("\nSo %d | %d : %d (He 10)",i,j,i|j);
		printf("\nSo %d | %d : %o (He 8)",i,j,i|j);
		printf("\nSo %d | %d : %X (He 16)",i,j,i|j);
		printf("\nSo %d ^ %d : %d (He 10)",i,j,i^j);
		printf("\nSo %d ^ %d : %o (He 8)",i,j,i^j);
		printf("\nSo %d ^ %d : %X (He 16)",i,j,i^j);
		getch();
	}