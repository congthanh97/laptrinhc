/* Chuong trinh 8 */
#include<stdio.h>
float x[]={4,6,8,3.5},
	  y[]={2.6,3.2,4,7};
main()
	{
		float s=0;
		int i=0;
		while (s+=x[i] * y[i],++i -4)  /* ? */
			;						  /* ? */
		printf("\n Vecto x[]={4,6,8,3.5}");
		printf("\n Vecto y[]={2.6,3.2,4,7}");
		printf("\nTich vo huong cua 2 vecto X va Y = %8.2f ",s);
		getch();
	}
