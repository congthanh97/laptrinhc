#include"stdio.h"
#include"dos.h"
#include"alloc.h"
#include"string.h"
char getfattr(char far *duong_dan)
	{
		union REGS inreg,outreg;
		struct SREGS sreg;
		inreg.h.ah=0x43;
		inreg.h.al=0; /*Doc thuoc tinh */
		inreg.x.dx=FP_OFF(duong_dan);
		sreg.ds=FP_SEG(duong_dan);
		int86x(0x21,&inreg,&outreg,&sreg);
		if (outreg.x.cflag)
			return(-1);
		else
			return(outreg.x.cx);
	}
char *strattr(char attr)
	{
		char *result;
		result=calloc(12,sizeof(char));
		if ((attr &FA_RDONLY) !=0)
			strcat(result,"R+");
		if ((attr &FA_HIDDEN) !=0)
			strcat(result,"H+");
		if ((attr &FA_SYSTEM) !=0)
			strcat(result,"S+");
		if ((attr &FA_LABEL) !=0)
			strcat(result,"Label");
		if ((attr &FA_DIREC) !=0)
			strcat(result,"<DIR>");
		if ((attr &FA_ARCH) !=0)
			strcat(result,"A");
			return(result);
	}
main()
	{
		char duong_dan[11];
		clrscr();
		printf("\n XEM THUOC TINH CUA TAP TIN");
		printf("\n-Go vao ten duong dan hoac ten tap tin : ");
		gets(duong_dan);
		printf("\nCo thuoc tinh: %s",strattr(getfattr(duong_dan)));
		printf("\nBam phim bat ky de ket thuc");
		getch();
	}