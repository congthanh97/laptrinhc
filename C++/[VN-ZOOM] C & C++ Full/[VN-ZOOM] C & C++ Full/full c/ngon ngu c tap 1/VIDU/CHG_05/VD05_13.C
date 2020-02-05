/* Chuong trinh 3 : Vang mat ca 3 bieu thuc */
float a[]={63.2,-45.6,70.1,3.6,14.5};
main()
	{
		int i=0,j=4;
		float c;
		for (; ;) /* Vang mat ca 3 bieu thuc */
			{
				c=a[i]; /* Giai thuat doi cho */
				a[i]=a[j];
				a[j]=c;
				if (++i >= --j)
					goto tt;
			}
		tt:printf("\nDay so cu ");
		printf("\n 63.2  -45.6  70.1  3.6  14.5");
		printf("\nDay so moi");
		printf("\n\r");
		for (i=-1;i++<4;printf("%8.2f",a[i]));
			/* Bieu thuc 3 lai la cau lenh */
		getch();
	}