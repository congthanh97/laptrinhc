
  void uocso(a,b)
  int a,b;
  	 {
		int x,y;
		while(a-b)
			{
				if (a>b)
					 a=a-b;
				else
					 b=b-a;
			 }
			printf("\nUoc so chung lon nhat cua 2 so la = %d",a);
	 }

 main()
  {
	int x,y;
	clrscr();
	printf("\nNhap 2 so nguyen a va b = ");
	printf("\nSo thu nhat = ");
	scanf("%d",&x);
	printf("\nSo thu hai  = ");
	scanf("%d",&y);
	uocso(x,y);
	getch();
  }
