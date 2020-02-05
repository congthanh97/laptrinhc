
  /* Chuong trinh giai phuong trinh bac 2 */
  /* Dat bay de khong nhap a=0 */

main()
  {
    float a,b,c,denta;
    printf("\nGiai phuong trinh bac hai");
    do
		{
			printf("\nNhap he so a = ");
			scanf("%f",&a);
		}
	 while (a==0);
	 printf("\nNhap he so b = ");
	 scanf("%f",&b);
	 printf("\nNhap he so c = ");
	 scanf("%f",&c);
	 if((denta=b*b-4*a*c)<0)
		 printf("\nPhuong trinh vo nghiem");
	 else
		 if(denta==0)
			printf("\nPhuong trinh co nghiem kep %f",-b/(2*a));
		 else
		   {
			  denta=sqrt((double)denta);
			  printf("\Phuong trinh co hai nghiem:");
			  printf("\nX1=%f va X2 =%f",
				(-b-denta)/(2*a),(-b+denta)/(2*a));
		   }
	 getch();
  }