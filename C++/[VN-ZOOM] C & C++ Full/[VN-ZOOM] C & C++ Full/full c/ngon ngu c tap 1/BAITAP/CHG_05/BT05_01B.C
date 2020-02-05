

				/* Tim so lon nhat cua 2 so thuc */
						/*  Cau lenh if du */
 main()
	{
		float a,b,max;
		int k;
		tt:clrscr();
		printf("\nNhap so thu nhat (a) = ");
		scanf("%f",&a);
		printf("\nNhap so thu hai (b) = ");
		scanf("%f",&b);
		if(a>b)
			max=a;
		else
			max=b;
		printf("\n\So lon nhat trong hai so la =%8.2f",max);
		printf("\n\n    Tiep tuc (go so 1)/dung (go so 0)");
		scanf("%d",&k);
		if(k==1) goto tt;
	}