

/* chuong trinh tim phan tu am dau tien */
float a[3][4]={
				 {15,46,3.5,6.3},
				 {34,0,-25,35},
				 {1,-13,46,-38}};
main()
  {
	int i,j;
	for(i=0;i<3;++i)
		for(j=0;j<4 ;++j)
			if (a[i][j] < 0)
				goto timthay;
				printf("\n Ma tran khong co phan tu am ");
				goto ketthuc;
	timthay:
	printf("\nPhan tu am dau tien la a(%d,%d)=%8.2f",i+1,j+1,a[i][j]);
	ketthuc:
	;    /* cau lenh rong */
	getch();
  }
