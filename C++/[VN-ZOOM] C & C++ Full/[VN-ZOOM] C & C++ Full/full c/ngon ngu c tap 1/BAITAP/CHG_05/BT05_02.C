	/* Tim so lon nhat trong 4 so nguyen */
			  /* Cau truc if du */
	main()
	{
		int a,b,c,d,max1,max2,max,t;
		tt:clrscr();
		printf("\nCHUONG TRINH TIM SO NGUYEN LON NHAT TRONG 4 SO");
		printf("\nNhap so thu nhat : ");
		scanf("%d",&a);
		printf("\nNhap so thu hai  : ");
		scanf("%d",&b);
		printf("\nNhap so thu ba   : ");
		scanf("%d",&c);
		printf("\nNhap so thu tu   : ");
		scanf("%d",&d);
		if (a > b)
			max1=a;
		else
			max1=b;
			if (c > d)
				max2=c;
			else
				max2=d;
				if (max1 > max2)
					{
						max=max1;
						clrscr();
						printf("\n     KET QUA");
						printf("\nTrong 4 so vua nhap");
						printf("\nSo thu nhat = %4d ",a);
						printf("\nSo thu hai  = %4d ",b);
						printf("\nSo thu ba   = %4d ",c);
						printf("\nSo thu tu   = %4d ",d);
						printf("\nSo lon nhat trong 4 so la = %4d ",max);
					}
				else
					{
						max=max2;
						clrscr();
						printf("\n     KET QUA");
						printf("\nTrong 4 so vua nhap");
						printf("\nSo thu nhat = %4d ",a);
						printf("\nSo thu hai  = %4d ",b);
						printf("\nSo thu ba   = %4d ",c);
						printf("\nSo thu tu   = %4d ",d);
						printf("\nSo lon nhat trong 4 so la = %4d ",max);
					}
		printf("\n\n    Tiep tuc (bam so 1) / Cham dut (bam so 0) ");
		scanf("%d",&t);
		if (t==1)
			goto tt;
	}