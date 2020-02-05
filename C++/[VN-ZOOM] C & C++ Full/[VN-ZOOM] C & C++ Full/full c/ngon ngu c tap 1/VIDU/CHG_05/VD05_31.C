/* Chuong trinh 3: Cau lenh do ... while */
main()
	{
		int s=0,i=1,n;
		clrscr();
		printf("\nTinh tong binh phuong cua bao nhieu so nguyen : ");
		scanf("%d",&n);
		do
			{
				s+=(i*i);
				++i;
			}
		while ( i <= n);
		printf("\nTong binh phuong cua : %d so nguyen dau tien la : %d",n,s);
		getch();
	}
