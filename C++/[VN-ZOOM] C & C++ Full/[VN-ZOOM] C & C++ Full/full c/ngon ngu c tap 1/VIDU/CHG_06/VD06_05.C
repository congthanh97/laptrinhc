
long double gt(int i)
  {
	 long double tam;
    int k;
	 tam = 1;
    for (k=1;k<=i;k++)
		tam=tam*k;
		return(tam);
   }

main()
  {
	 int i,n;
	 float p;
	 printf("\n    TINH GIAI THUA");
	 printf("\n cua n so nguyen dau tien \n");
	 printf("\nNhap vao so can tinh : ");
	 scanf("%d",&n);
	 p=1;
	 for (i=1;i<n;++i)
		;
		p=p*gt(i);
		printf("\nGiai thua cua %d = %11.9f",n,p);
		getch();
  }
