#include"conio.h"
main()
	{
		float s;
		long gt;
		int n,k;
		clrscr();
		textbackground(BLACK);
		textcolor(LIGHTRED);
		cprintf("\n\rChuong trinh tinh tong nghich dao giai thua");
		cprintf("\n\rcua N so nguyen dau tien");
		s=0;
		gt=1;
      textbackground(BLACK);
		textcolor(LIGHTCYAN);
		cprintf("\n\r-Cho N= ");
		scanf("%d",&n);
      textbackground(BLACK);
		textcolor(LIGHTMAGENTA);
		for (k=1;k<=n; k++)
			{
				gt*=k;
				cprintf("\n\r        -giai thua cua (%d)=%ld",k,gt);
				s+=1.0/gt;
			}
      textbackground(BLACK);
		textcolor(GREEN);
		cprintf("\n\r      *Tong nghich dao can tim la S(%d) = %f",n,s);
      textbackground(BLACK);
		textcolor(YELLOW);
		cprintf("\n\r-Dung man hinh de xem ket qua");
		cprintf("\n\r-Bam phim bat ky de ket thuc");
		getch();
	}