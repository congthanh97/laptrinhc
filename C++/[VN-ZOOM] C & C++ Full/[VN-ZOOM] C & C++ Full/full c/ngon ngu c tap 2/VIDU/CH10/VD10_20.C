#include"stdio.h"
enum luong_tuan {Thu_Hai,Thu_Ba,Thu_tu,Thu_Nam,Thu_Sau,
					Thu_Bay,Chu_Nhat};
char *thu[]={"Thu Hai","Thu Ba","Thu Tu","Thu Nam",
					"Thu Sau","Thu Bay","Chu Nhat"};
main()
	{
		enum luong_tuan ngay;
		char ten[8];
		float luong=0;
		int gio;
		clrscr();
		printf("\nCho biet ten : ");
		scanf("%s",&ten);
		for (ngay=Thu_Hai; ngay <=Chu_Nhat;ngay++)
			{
				printf("\n- Gio lam viec trong ngay: %s la= ",thu[(int)ngay]);
				scanf("%d",&gio);
				switch (ngay)
					{
						case Thu_Nam: luong+=1.25*gio;
										  break;
						case Chu_Nhat: luong+=2*gio;
										  break;
						default		: luong+=1.1*gio;
										  break;
					}
			}
		printf("\n Ong ( Ba ) : %s ",ten);
		printf("\n-Se nhan duoc tien luong trong tuan la = ");
		printf("%d dollars va %0.2f cents",(int)luong,luong-(int)luong);
		getch();
	}