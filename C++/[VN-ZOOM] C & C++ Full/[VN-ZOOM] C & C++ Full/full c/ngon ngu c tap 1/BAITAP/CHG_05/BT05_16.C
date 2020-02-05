
/* Tim uoc so chung lon nhat va boi so chung nho nhat */
main()
  {
	 int a,b;
	 long p;
	 clrscr();
	 printf("\nNhap vao so thu nhat = ");
	 scanf("%d",&a);
	 printf("\nNhap vao so thu hai = ");
	 scanf("%d",&b);
	 printf("\nUoc so chung lon nhat cua %d va %d la = ",a,b);
	 a=abs(a);
	 b=abs(b);
	 p=(long)a*b;
	 while(a-b)
      {
		 if (a>b) a=a-b;
		 else b=b-a;
      }
	 printf("%d\nBoi so chung nho nhat la %ld",a,p/a);
	 getch();
  }
