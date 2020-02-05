	/* Phep toan quan he */
	main()
	{
		int i,j;
		clrscr();
		printf("\nNhap so thu nhat = ");
		scanf("%d",&i);
		printf("\nNhap so thu hai = ");
		scanf("%d",&j);
		printf("\nSo %d > %d : %d ",i,j,i>j);
		printf("\nSo %d < %d : %d ",i,j,i<j);
		printf("\nSo %d >= %d : %d ",i,j,i>=j);
		printf("\nSo %d <= %d : %d ",i,j,i<=j);
		printf("\nSo %d != %d : %d ",i,j,i!=j);
		printf("\nSo %d == %d : %d ",i,j,i==j);
		getch();
	}