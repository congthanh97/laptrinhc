
	/* Vi du ve cac phep toan so hoc  */
	main()
	{
	  int i=10,j=4,x1,k;
	  float x;
	  k=i+j;
	  clrscr();
	  printf("\nLuc dau ban co 2 so nguyen i=10, j=4\n\n");
	  printf("Tong cua 2 so nguyen = %d\n\n",k);
	  x=i;
	  printf("Gan tri cua i ( kieu int ) cho x ( kieu float ) thi X= %f\n\n",x);
	  x1=i/j;
	  printf("Thuong so cua ( int ) i/j = %d\n\n",x1);
	  x=(float)i/j;
	  printf("Thuong so cua (loat) i/j  = %f\n\n",x);
	  k=i%j;
	  printf("Du so cua phep chia nguyen = %d\n\n",k);
	  x=1.5;i=5;
	  printf("Gan x=1.5 va i=5 Tong cua 2 so  =%f\n",x+i);
	  getch();
	 }