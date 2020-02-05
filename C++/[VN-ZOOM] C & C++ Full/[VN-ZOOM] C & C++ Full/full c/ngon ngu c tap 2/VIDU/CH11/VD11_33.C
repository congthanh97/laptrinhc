#include"stdio.h"
typedef struct
	{
		char ten[8];
		int tuoi;
	}cautruc;
	const cautruc A[6]={"Mai",23,"Dao",21,"Lan",18,
							"Hue",20,"Cuc",19,"Hong",22};
	FILE *f;
	int k;
	main()
		{
			cautruc *buffer;
			f=fopen("dulieu1.dbf","w+b");  /*Mo tap tin, ghi nhi phan*/
			for (k=0; k<6; k++)
				fwrite(&A[k], sizeof(cautruc),1,f);
			fseek(f,0,SEEK_SET);
			buffer=(cautruc *)malloc(sizeof(cautruc));
			for (k=0; k<6; k++)
				{
					fread(buffer, sizeof(cautruc),1,f);
					printf("\n  Ten  : %s    Tuoi : %d  ",
										buffer->ten,buffer->tuoi);
				}
			clrscr();
			printf("\n\tMINH HOA DI CHUYEN CON TRO TAP TIN");
			printf("\nMuon di chuyen toi nguoi thu may ?: ");
			scanf("%d",&k);
			fseek(f,(k-1)*sizeof(cautruc),SEEK_SET);
			fread(buffer,sizeof(cautruc),1,f);
         printf("\n  Ten  : %s    Tuoi : %d  ",
										buffer->ten,buffer->tuoi);
			fseek(f,sizeof(cautruc),SEEK_CUR);
			fread(buffer,sizeof(cautruc),1,f);
         printf("\n  Ten  : %s    Tuoi : %d  ",
										buffer->ten,buffer->tuoi);
			fseek(f,0,SEEK_SET);
			fread(buffer,sizeof(cautruc),1,f);
         printf("\n  Ten  : %s    Tuoi : %d  ",
										buffer->ten,buffer->tuoi);
			free(buffer);
			fclose(f);
			printf("\nBam phim bat ky de ket thuc");
			getch();
		}