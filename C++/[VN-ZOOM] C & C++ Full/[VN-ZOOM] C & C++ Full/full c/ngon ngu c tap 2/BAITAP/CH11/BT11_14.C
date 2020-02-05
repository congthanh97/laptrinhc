#include"stdio.h"
#include"dos.h"
main()
	{
		union REGS inreg;
		char duong_dan[11];
		clrscr();
		printf("\CAI DAT THUOC TINH CHI DOC");
		printf("\nGo ten tap tin hoac thu muc can chi doc: ");
		gets(duong_dan);
		inreg.h.ah=0x43;
		inreg.h.al=1; /*Cai dat thuoc tinh */
		inreg.x.dx=	FP_OFF(duong_dan);
		inreg.x.cx=0x01; /* Thuoc tinh chi doc */
		int86(0x21,&inreg,&inreg);
		printf("\nDa cai dat xong thuoc tinh chi doc");
		printf("\nBam phim bat ky de ket thuc");
		getch();
	}