#include"stdio.h"
#include"dir.h"
#include"string.h"
#include"dos.h"
#include"alloc.h"
main(int argc, char *argv[])
	{
		struct ffblk fileinfo;
		char duong_dan[50];
		char o_dia[3];
		char thu_muc[50];
		char tap_tin[8];
		char mo_rong[4];
		int ket_qua;
		int dong=0;
		char ch;
		char buf[6], *attr;
		int thuoc_tinh=FA_ARCH+FA_HIDDEN+FA_RDONLY+
				FA_SYSTEM+FA_DIREC+FA_LABEL;
		if (argc > 1)
			strcpy(duong_dan,argv[1]);
		else
			{
				clrscr();
				printf("\nDUONG DAN VA CAC TAP TIN TRONG THU MUC");
				printf("\nGo ten duong dan tap tin can xem: ");
				scanf("%s",duong_dan);
			}
		fnsplit(duong_dan,o_dia,thu_muc,tap_tin,mo_rong);
		printf("\n\t*Ban vua cung cap: ");
		printf("\n-Duong dan   =%s",duong_dan);
		printf("\n-Ten o dia   =%s",o_dia);
		printf("\n-Thu muc     =%s",thu_muc);
		printf("\n-Ten tap tin =%s",tap_tin);
		printf("\n-Phan mo rong=%s",mo_rong);
		printf("\n-------------------------------------");
		printf("\n\tBam phim bat ky de xem cac tap tin khac");
		getch();
		if (strcmp(tap_tin," ")==0);
			strcpy(tap_tin,"*");
		if (strcmp(mo_rong," ")==0);
			strcpy(mo_rong,".*");
		fnmerge(duong_dan,o_dia,thu_muc,tap_tin,mo_rong);
		ket_qua=findfirst(duong_dan,&fileinfo,thuoc_tinh);
		while (ket_qua ==0)
			{
				dong++;
				itoa(fileinfo.ff_attrib,buf,2);
				strcpy(buf,strrev(buf));
				attr=calloc(40,sizeof(char));
				if (buf[0]=='1')
					strcat(attr,"RDONLY+");
				if (buf[1]=='1')
					strcat(attr,"HIDDEN+");
				if (buf[2]=='1')
					strcat(attr,"SYSTEM+");
				if (buf[3]=='1')
					strcat(attr,"LABEL+");
				if (buf[4]=='1')
					strcat(attr,"<DIR>");
				if (buf[5]=='1')
					strcat(attr,"ARCHIVE");
				printf("\n-Tap tin:%-13s -Kich thuoc:%6ld byte -Thuoc tinh:",
									fileinfo.ff_name,	fileinfo.ff_fsize);
				printf(" %s",attr);
				if ((dong % 22)==0)
					{
						printf("\n                ---------------------------");
						while (!kbhit());
							ch=getchar();
							if (ch==27)
								exit(1);
					}
				free(attr);
				ket_qua=findnext(&fileinfo);
				printf("\n                ---------------------------");
			}
		getch();
	}
