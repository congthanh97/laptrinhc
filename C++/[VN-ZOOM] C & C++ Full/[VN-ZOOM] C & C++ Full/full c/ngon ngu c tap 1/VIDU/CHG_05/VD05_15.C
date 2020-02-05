/* Chuong trinh dao nguoc mot day so */
float a[]={63.2,-45.6,70.1,3.6,14.5};
main()
	{
		int i=0,j=4;
		float c;
		printf("\nDay so cu ");
		printf("\n 63.2  -45.6  70.1  3.6  14.5");
		printf("\nDay so moi");
		printf("\n\r");
		for (;c=a[i],a[i]=a[j],a[j]=c,++i<--j;);
				for (i=0;printf("%8.2f",a[i]),++i -5;);
   		getch();
	}