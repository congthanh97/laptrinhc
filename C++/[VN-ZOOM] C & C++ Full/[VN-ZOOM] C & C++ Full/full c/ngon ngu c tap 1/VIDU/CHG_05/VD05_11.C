/* Chuong trinh 1 : Bieu thuc con */
float a[]={63.2,-45.6,70.1,3.6,14.5};
main()
	{
		int i,j;
		float c;
		for (i=0,j=4;i<j;++i,--j)
			{
				c=a[i]; /* Giai thuat doi cho */
				a[i]=a[j];
				a[j]=c;
			}
		printf("\nDay so cu ");
		printf("\n 63.2  -45.6  70.1  3.6  14.5");
		printf("\nDay so moi");
		printf("\n\r");
		for (i=0;i<5;++i)
			printf("%8.2f",a[i]);
		getch();
	}