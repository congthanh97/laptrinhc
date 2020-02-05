#include"stdio.h"
#include"dos.h"
main()
	{
		union REGS inreg;
		char duong_dan[11];
		clrscr();
		printf("\CAI DAT THUOC TINH CHE DAU");
		printf("\nGo ten tap tin hoac thu muc can che dau: ");
		gets(duong_dan);
		inreg.h.ah=0x43;
		inreg.h.al=1; /*Cai dat thuoc tinh */
		inreg.x.dx=	FP_OFF(duong_dan);
		inreg.x.cx=0x02; /* Thuoc tinh che dau */
		int86(0x21,&inreg,&inreg);
		printf("\nDa che dau xong: %s ",duong_dan);
		printf("\nBam phim bat ky de ket thuc");
		getch();
	}