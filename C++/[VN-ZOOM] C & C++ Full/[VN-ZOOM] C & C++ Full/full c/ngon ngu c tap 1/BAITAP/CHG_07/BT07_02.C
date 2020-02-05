#include<stdio.h>
main()
	{
		const char ten[][18]={"Nguyen Van Xuan","Tran Van Ha",
		"Bui Thi Thu","Pham Van Dong","Le Van Son","Chu Van Ha",
		"Dang Van Xa","Vo Van Tac"};
		int k;
		for ( k=0,puts("  ");k<8;puts(ten[k++]));
		getch();
	}