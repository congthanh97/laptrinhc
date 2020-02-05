	/* Phep toan luan ly */
	main()
	{
		int i,j;
		clrscr();
		printf("\nNhap so thu nhat = ");
		scanf("%d",&i);
		printf("\nNhap so thu hai = ");
		scanf("%d",&j);
		printf("\nSo %d co NOT %d : %d ",i,i,!i);
		printf("\nSo %d co NOT %d : %d ",j,j,!j);
		printf("\nSo %d AND %d : %d ",i,j,i&&j);
		printf("\nSo %d OR %d : %d ",i,j,i||j);
		getch();
	}