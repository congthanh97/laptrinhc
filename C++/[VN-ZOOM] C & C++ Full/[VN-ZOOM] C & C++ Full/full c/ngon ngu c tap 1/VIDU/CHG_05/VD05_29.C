/* Chuong trinh 1: Cau lenh for */
main()
	{
		int s=0,i,n;
		clrscr();
		printf("\nTinh tong binh phuong cua bao nhieu so nguyen : ");
		scanf("%d",&n);
		for (i = 1;i <= n; ++i)
			s+=(i * i);
		printf("\nTong binh phuong cua : %d so nguyen dau tien la : %d",n,s);
		getch();
	}
