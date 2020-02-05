

#include"string.h"
#include"stdio.h"
main()
  {
	 char *ho,*hoten[28]={ "Nguyen Van Nam","Tran Van Quoc",
	 "Bui Thi Son","Nguyen Van Ha","Tran Nam","Tran Van De",
	 "nguyen thi Cu","Nguyen thi Tu","Nguyen Nhien",
	 "Tran thi Dinh","Tran thi Phan","Tran Van Tai",
	 "Bui Van Thien","vo Thu","Nguyen van Nhu","Dang Van Ha",
	 "Pham Van Nghich","Bui Van Lo","Dang Van Lai",
	 "tran Van Xam","Nguyen Van Pham","Le Van Nhu",
	 "Chu Van Dang","Bui Van Hanh","Dang Van Khang",
	 "Pham Van Thu","Tran Van Bai","nguyen Van Hu"};
	 int i,dem=0;
	 clrscr();
	 printf("\nDANH SACH NHUNG NGUOI HO NGUYEN");
	 for(i=0;i<28;i++)
		if (strstr(hoten[i],"Nguyen")!=NULL)
			{
				printf("\n%2d.%s",dem+1,hoten[i]);
				dem++;
			}
		printf("\n\nTong cong co %d nguoi ho Nguyen",dem);
      getch();
  }