#include"stdio.h"
#include"alloc.h"
#include"string.h"
#include"conio.h"
char *s[]={"Tran Thu Do","Ly Thai To","Nguyen Nhac",
			"Le Lai","Tran Hung Dao","Pham Ngu Lao",
			"Ly Thuong Kiet","Nguyen Canh Chan","Le Loi",
			"Tran Nguyen Han","Le Thanh Tong","Ly Nam De",
			"Tran Khanh Du","Pham Hong Thai","Le Hoan"};
char *thaythe(unsigned char kytu,size_t lan)
	{
		char *inkytu;
		inkytu=calloc(lan,sizeof(char)+1);
		memset(inkytu,kytu,lan);
		return(inkytu);
	}
void lietke(char *ho)
	{
		char k;
		char dem=1;
		char *p;
		textcolor(YELLOW);
		cprintf("\n\r %s",thaythe(205,35));
		cprintf("\n\r");
		textcolor(LIGHTRED);
		cprintf(" * Danh sach nhung nguoi ho : %s *",ho);
		textcolor(LIGHTCYAN);
		cprintf("\n\r");
		for (k=0;s[k];k++)
			if ((p=strstr(s[k],ho)) !=NULL && *p==*s[k])
				{
					cprintf("\n\r- %d %s",dem,s[k]);
					dem++;
				}
			if (dem)
				{
					textcolor(LIGHTMAGENTA);
					cprintf("\n\r * Tong cong co : %d nguoi ho : %s",(dem-1),ho);
				}
			else
				{
					textcolor(LIGHTMAGENTA);
					cprintf("\n Khong co nguoi nao ho : %s ",ho);
				}
		textcolor(YELLOW);
		cprintf("\n\r--------------------------------------");
		textcolor(LIGHTGREEN + BLINK);
		cprintf("\n\r       Bam phim bat ky de xem tiep");
		getch();
	}
main()
	{
		clrscr();
		lietke("Ly");
		lietke("Tran");
		lietke("Nguyen");
		lietke("Le");
		lietke("Pham");
	}
