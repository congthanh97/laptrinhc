/* Chuong trinh 4 : Than lenh for rong */
float a[]={63.2,-45.6,70.1,3.6,14.5};
main()
	{
		int i=-1,j;
		float c;
		for (;j=4- ++i,i<j ;)
			{
				c=a[i]; /* Giai thuat doi cho */
				a[i]=a[j];
				a[j]=c;
			}
		printf("\nDay so cu ");
		printf("\n 63.2  -45.6  70.1  3.6  14.5");
		printf("\nDay so moi");
		printf("\n\r");
		for (i=0;i-5 ;)
		printf("%8.2f",a[i++]);
			/* Bieu thuc 3 lai la cau lenh */
		getch();
	}