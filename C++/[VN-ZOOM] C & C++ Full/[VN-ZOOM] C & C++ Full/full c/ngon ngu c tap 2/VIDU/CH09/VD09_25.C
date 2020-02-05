#include"stdio.h"
#include"string.h"
main()
  {
	 char *ten[12]={"Nguyen Van Xuan","Vo Van Ha","Bui Thi Thu",
	 "Chu Van Dong","Tran Van Son","Nguyen Thi Ha",
	 "Pham Van Xa","Nguyen Van Tac","Dang Van Nam",
	 "Chu Van Bac","Bui Van Dong","Tran Van Tay"};
    int i;
    clrscr();
	 printf("\nDANH SACH NGHUNG NGUOI CO KY TU  \"N\" va \"T\"\n");
	 for(i=0;i<12;i++)
		if (strpbrk(ten[i],"NT")!=NULL)
			printf("\n                   %s",ten[i]);
    getch();
  }