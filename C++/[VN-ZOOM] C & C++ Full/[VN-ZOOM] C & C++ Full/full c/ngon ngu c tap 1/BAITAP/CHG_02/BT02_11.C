#include<stdio.h>
main()
{
	char ten[150];
	/*long ng_cong,b_lg,t_ung;*/
	float luong,c_linh,h_so,ng_cong,b_lg,t_ung;
	clrscr();
	printf("\n Cho biet Ten = ");
	scanf("%s",&ten);
	printf("\n Cho biet bac luong = ");
	scanf("%f",&b_lg);
	printf("\n Cho biet so ngay lam viec = ");
	scanf("%f",&ng_cong);
	printf("\n Cho biet he so phu cap = ");
	scanf("%f",&h_so);
	printf("\n Cho biet so tien da tam ung = ");
	scanf("%f",&t_ung);
	luong=(b_lg/30)*ng_cong*h_so;
	c_linh=luong-t_ung;
	printf("\n");
	printf("\n _____________________________________________");
	printf("\n");
	printf("\n Ong/Ba :%s ",ten);
	printf("\n So tien luong duoc huong = %.2f",luong);
	printf("\n So tien da tam ung       = %.2f",t_ung);
	printf("\n So tien con duoc lanh    = %.2f",c_linh);
	getch();
}