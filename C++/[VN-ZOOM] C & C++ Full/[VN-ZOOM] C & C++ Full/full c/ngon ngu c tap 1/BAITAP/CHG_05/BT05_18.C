
 /* Chuong trinh tinh can bac 2 */

 main()
   {
	  double a,xn,c,fabs();
	  int i;
	  tt:printf("\nNhap vao mot so a= ");
	  scanf("%lf",&a);
	  if(a<0)
       {
			printf("\nKhong the tinh can bac 2 cua so am\n");
			printf("\nBam phim bat ky de nhap lai");
			getch();
			goto tt;
       }
	  if(a==0)
       {
			xn=0;
			goto kq;
       }
	  xn=a;
	  do
		 {
			 c=xn;
			 xn=(xn*xn+a)/(2*xn);
		 }
	  while(fabs((xn-c)/c) > 1e-5);
	  kq:printf("\nNeu a= %8.2f,thi can bac hai cua a=%8.2f\ ",a,xn);
	  printf("\n\n    Tiep tuc nua khong ?(tiep=1,khong=0)");
	  scanf("%d",&i);
	  if(i==1) goto tt;
   }