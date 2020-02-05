main()
	{
		int a,b,max;
		printf("\nNhap so thu nhat = ");
		scanf("%d",&a);
		printf("\nNhap so thu hai = ");
		scanf("%d",&b);
		max=a;
		if (b>a)
			max=b;
		printf("\nSo thu nhat =%d ",a);
		printf("\nSo thu hai  =%d ",b);
		printf("\nSo lon nhat =%d ",max);
		getch();
	}