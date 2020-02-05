/* Chuong trinh 2: Cau lenh while */
main()
	{
		int s=0,i=1,n;
		clrscr();
		printf("\nTinh tong binh phuong cua bao nhieu so nguyen : ");
		scanf("%d",&n);
		while ( i <= n)
			{
				s+=(i*i);
				++i;
			}
		printf("\nTong binh phuong cua : %d so nguyen dau tien la : %d",n,s);
		getch();
	}
