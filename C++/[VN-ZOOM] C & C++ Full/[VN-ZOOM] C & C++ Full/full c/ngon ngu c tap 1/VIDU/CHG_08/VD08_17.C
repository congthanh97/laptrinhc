#include<stdio.h>
main()
	{
		int i;
		tt:printf("\nCan tim nguoi thu may : ");
		scanf("%d",&i);
		tim(i);
		printf("\n\nBam so 1 de tiep tuc,so 0 de dung ");
		scanf("%d",&i);
		if (i==1)
			goto tt;
	}

tim(ma)
int ma;
	{
		static char *ds[]={"Sai ma roi","Nguyen Van Xuan",
		"Tran Van Ha","Bui Thi Thu","Pham Van Dong",
		"Chu Van Son","Dang Thi Ha","Le Van Xa","Vo Van Tac"};
		printf("\n%10c Ma = ",'');
		printf("%d .Ten la : %s",ma,(ma<1 || ma >8) ? ds[0]:ds[ma]);
	}