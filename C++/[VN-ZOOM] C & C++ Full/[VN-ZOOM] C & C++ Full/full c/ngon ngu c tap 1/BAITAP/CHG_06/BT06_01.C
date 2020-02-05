

#define MAXINT 65535
/* Kiem tra return va exit */

int a,b;
void PhepCong()
  {
	printf("\n- Neu dem so %d cong voi %d ket qua la %d",a,b,a+b);
  }


void PhepTru()
  {
	printf("\n- Neu dem so %d tru di so %d ket qua la %d",a,b,a-b);
  }


void PhepChia()
  {
	if ( b== 0)
		exit();
	else
		printf("\n- Neu dem so %d chia cho %d ket qua la %d",a,b,a/b);
  }

void PhepNhan()
  {
	if (((long)a*b)>MAXINT)
		 return;
	else
		 printf("\n- Neu dem so %d nhan voi so %d ket qua la %d",a,b,a*b);
  }
char Chon()
  {
	char Ch;
	printf("\n        Tiep tuc nua khong ? (C/K) ");
	Ch=toupper(getch());
	clrscr();
	return (Ch-'C');
  }
main()
  {
	char KetThuc;
	clrscr();
	do
		{
			printf("\n\tNhap so thu nhat a = ");
			scanf("%d",&a);
			printf("\n\tNhap so thu hai b = ");
			scanf("%d",&b);
			printf("\n         KET QUA TINH TOAN \n");
			PhepCong();
			PhepTru();
			PhepNhan();
			PhepChia();
			KetThuc=Chon();
		}
	while ( ! KetThuc);
  }
