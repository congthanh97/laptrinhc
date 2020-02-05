
		  /*Tim so lon nhat trong 2 so thuc */
				 /*Cau truc if thieu */

 main()
   {
	  float a,b,max;
	  int k;
	  tt:clrscr();
	  printf("\nNhap so thu nhat (a) = ");
	  scanf("%f",&a);
	  printf("\nNhap so thu hai (b) = ");
	  scanf("%f",&b);
	  max=a;
	  if(b>a)
		  max=b;
		  printf("\na= %8.2f",a);
		  printf("\nb= %8.2f",b);
		  printf("\n\nSo lon nhat trong hai so la =%8.2f",max);
		  printf("\n\n      Tiep tuc nua khong ? (0/1)");
		  printf("\n(Go so 1 de tiep tuc, so 0 de ket thuc) ");
		  scanf("%d",&k);
		  if(k==1)
			  goto tt;
   }