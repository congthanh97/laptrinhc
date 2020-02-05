
	/* Phep toan dich trai */
	main()
	{
	 int i,j,n;
	 clrscr();
	 printf("\nNhap mot so nguyen = ");
	 scanf("%d",&i);
	 printf("\nCan dich trai may bit= ");
	 scanf("%d",&n);
	 j=i<<n;
	 printf("\nSo %d dich trai %d bit co tri (He 10) la = %d",i,n,j);
	 printf("\nSo %d dich trai %d bit co tri (He 8 ) la = %o",i,n,j);
	 printf("\nSo %d dich trai %d bit co tri (He 16) la = %X",i,n,j);
	 getch();
	}