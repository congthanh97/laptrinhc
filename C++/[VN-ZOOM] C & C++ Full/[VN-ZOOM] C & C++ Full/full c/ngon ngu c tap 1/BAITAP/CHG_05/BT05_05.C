

	/* Chuong trinh giai phuong trinh bac 2 */
main()
 {
	float a,b,c,x1,x2,denta;
	int k;
	tt:clrscr();
	printf("\Giai phuong trinh bac hai");
	printf("\nNhap he so a = ");
	scanf("%f",&a);
	printf("\Nhap he so b = ");
	scanf("%f",&b);
	printf("\Nhap he so c = ");
	scanf("%f",&c);
	denta=b*b-4*a*c;
	if (denta<0)
		 printf("\nPHUONG TRINH VO NGHIEM");
	else
		 if(denta==0)
			printf("\nPHUONG TRINH CO NGHIEM KEP X1=X2 =%8.2f ",-b/(2*a));
		 else
			{
				denta=sqrt((double)denta);
				x1=(-b-denta)/(2*a);
				x2=(-b+denta)/(2*a);
				printf("\nPhuong trinh co hai nghiem:");
				printf("\n\nNghiem thu nhat X1 =%8.2f ",x1);
				printf("\nNghiem thu hai  X2 =%8.2f ",x2);
			}
	 printf("\n\nTiep tuc (bam 1).Cham dut (bam 0) ");
	 scanf("%d",&k);
	 if (k==1)
		goto tt;
 }
