	/* Phep toan dieu kien */
	main()
	{
		int a,b;
		clrscr();
		printf("\nNhap so thu nhat= ");
		scanf("%d",&a);
		printf("\nNhap so thu hai = ");
		scanf("%d",&b);
		printf("\nSo lon hon trong 2 so vua nhap la so %d ",(a>b) ? a:b);
		getch();
	}