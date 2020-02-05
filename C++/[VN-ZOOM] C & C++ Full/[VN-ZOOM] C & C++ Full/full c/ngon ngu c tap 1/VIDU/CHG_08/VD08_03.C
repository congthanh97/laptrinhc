hoanvi(px,py)
int *px,*py;
	{
		int tam;
		tam=*px;
		*px=*py;
		*py=tam;
	}
main()
	{
		int a,b;
		printf("\n\tNhap so thu nhat A= ");
		scanf("%d",&a);
		printf("\n\tNhap so thu hai  B= ");
		scanf("%d",&b);
		hoanvi(&a,&b);
		printf("\nSau khi hoan vi");
		printf("\n\So thu nhat A= %d",a);
		printf("\n\So thu hai  B= %d",b);
		getch();
	}