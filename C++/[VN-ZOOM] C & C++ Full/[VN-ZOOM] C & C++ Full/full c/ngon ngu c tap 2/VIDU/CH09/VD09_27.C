#include"stdio.h"
#include"mem.h"
#include"alloc.h"
#include"string.h"
char *thaythe(unsigned char kytu, size_t lan)
	{
		char *ketqua;
		ketqua=calloc(lan,sizeof(char)+1);
		memset(ketqua,kytu,lan);
		return(ketqua);
	}
main()
	{
		char chuoi1[35]="Chuc Ban hanh phuc";
		char chuoi2[35]="Chuc Ban Hanh phuc";
		clrscr();
		printf("\n %s",thaythe(205,60));
		printf("\n %s",memchr(chuoi1,'C',30));
		printf("\n * Neu co phan biet giua chu thuong va chu HOA thi");
		if (memcmp(chuoi1,chuoi2,45) < 0)
			printf("\n    -Chuoi \"%s\" < chuoi \"%s\"",chuoi1,chuoi2);
		else
			printf("\n    - Chuoi \"%s\" > chuoi \"%s\"",chuoi1,chuoi2);
		printf("\n * Neu khong phan biet giua chu thuong va chu HOA thi");
		if (memicmp(chuoi1,chuoi2,45) < 0)
			printf("\n    - Chuoi \"%s\" < chuoi \"%s\"",chuoi1,chuoi2);
		else
			printf("\n    - Chuoi \"%s\" > chuoi \"%s\"",chuoi1,chuoi2);
		printf("\n %s",thaythe(205,60));
		getch();
	}