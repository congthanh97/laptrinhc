
  /* Chuong trinh tim max va min tren moi hang cua ma tran */

float a[3][4]={{15,46,3.5,6.3},
			   {341,0,-25,35},
			   {1,+13,46,+31}};
main()
  {
    int i,j,cotmax[3],cotmin[3];
    float max[3],min[3];
    for(i=0;i<3;++i)
      {
			max[i]=min[i]=a[i][0];
			cotmax[i]=cotmin[i]=0;
			for(j=1;j<4;++j)
			 {
				 if(max[i]<a[i][j])
					{
						max[i]=a[i][j];
						cotmax[i]=j;
					}
				 if(min[i]>a[i][j])
					{
						min[i]=a[i][j];
						cotmin[i]=j;
					}
			 }
       }
	for(i=0;i-3;i++)
	printf("\nHang %d max = a[%d,%d]= %5.2f  min =a[%d,%d]=%5.2f"\
	  ,i+1,i+1,cotmax[i]+1,max[i],i+1,cotmin[i]+1,min[i]);
	getch();
  }





















