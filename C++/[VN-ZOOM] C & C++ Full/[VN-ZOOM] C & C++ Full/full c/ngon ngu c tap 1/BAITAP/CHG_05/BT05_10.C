


	float a[]={3.5,0,23.3,0,4.7,-2,10,30,40};
	main()
	 {
		 float s=0,max=0;
		 int k=0,i;
		 clrscr();
		 for (i=0;i<9;++i)
			{
				if(a[i] <0)
					break;
				if(a[i] >0)
					{
						s+=a[i];
						k++;
						if (max < a[i])
							max=a[i];
					}
			}
		 printf("\nPhan tu am dau tien la phan tu thu %d\
			co tri = %8.2f",i+1,a[i]);
		 printf("\nSo phan tu duong dau tien la = %d",k);
		 printf("\nTong cac phan tu duong dau tien la= %8.2f",s);
		 printf("\nMax cua phan tu duong dau tien la %8.2f",max);
		 getch();
	 }