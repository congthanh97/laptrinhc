#include"stdio.h"
main()
	{
		struct hoten
			{
				char ho[10];
				char dem[10];
				char ten[10];
			};
		struct diachi
			{
				char quan[15];
				char phuong[15];
				char pho[15];
			};
		struct
			{
				struct hoten ht;
				struct diachi dc;
				int tuoi;
				float luong;
			}nv[100];
		int nam;
		float tien;
		int n,i;
		clrscr();
		printf("\n- Cho biet so nhan vien: ");
		scanf("%d",&n);
		for (i=0; i<n; ++i)
			{
				printf("\n* Nhap du lieu nguoi thu: %d",i+1);
				printf("\n	+ Ho va ten: ");
				scanf("%s %s %s",nv[i].ht.ho,nv[i].ht.dem,nv[i].ht.ten);
				printf("\n	+ Dia chi:Quan (Huyen),Phuong (Xa),Pho (Ap): ");
				scanf("%s%s%s",nv[i].dc.quan,nv[i].dc.phuong,nv[i].dc.pho);
				printf("\n	+ Tuoi: ");
				scanf("%d",&nam);
				nv[i].tuoi=nam;
				printf("\n	+ Bac luong: ");
				scanf("%f",&tien);
				nv[i].luong=tien;
			}   /* Ket thuc nhap du lieu */
			/* Bat dau tim kiem va in ket qua ra man hinh */
			for (i=0; i<n; ++i)
				{
					if (ss(nv[i].dc.quan,"PhuNhuan")
									&&nv[i].tuoi<=40 &&nv[i].luong>=200)
						{
							printf("\n- Ho va ten: %-10s%-10s%-10s",nv[i].ht.ho,
											nv[i].ht.dem,nv[i].ht.ten);
							printf("\n- Dia chi: %-12s%-12s%-12s",nv[i].dc.pho,
											nv[i].dc.phuong,nv[i].dc.quan);
							printf("\n- Tuoi:%3d\n- Bac luong:%10.2f dollars",
													 nv[i].tuoi,nv[i].luong);
						}
				}
			getch();
	}
/*So sanh 2 chuoi x,y cho gia tri 1 */
/* neu giong nhau,nguoc lai cho gia tri 0 */
int ss(x,y)
char *x,*y;
	{
		while (*x==*y)
			{
				if (*x=='\0')
					return(1);
					x++;
					y++;
			}
		return(0);
	}