main()
	{
		int a,b,*px;
		clrscr();
		printf("\nNhap mot so nguyen : ");
		scanf("%d",&a);
		px=&a;
		printf("\nDia chi cua bien A= %d dang thap luc (Hex) = %p ",a,&a);
		printf("\nDia chi cua bien A= %d dang thap phan (Dec)= %u ",a,&a);
		printf("\nNoi dung cua bien....................... A = %d ",a);
		printf("\nDia chi cua px tro toi dang thap luc (Hex) = %p ",px);
		printf("\nNoi dung tai dia chi px dang tro...........= %d ",*px);
		printf("\nNhap mot so nguyen khac : ");
		scanf("%d",&b);
		*px=b;
		printf("\nSau khi thuc hien gan *px= %d ",b);
		printf("\nDia chi cua bien A dang thap luc (Hex) = %p ",&a);
		printf("\nNoi dung cua bien A .............. ... = %d ",a);
		printf("\nNoi dung cua bien B vua nhap...........= %d ",b);
		getch();
	}