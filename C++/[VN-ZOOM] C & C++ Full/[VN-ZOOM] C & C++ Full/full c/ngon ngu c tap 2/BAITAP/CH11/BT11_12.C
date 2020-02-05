#include"stdio.h"
main()
	{
		FILE *fp;
		int i,tuoi,s;
		float luong;
		char ten[10];
		clrscr();
		printf("\nNHAP, IN DANH SACH NHAN VIEN");
		fp=fopen("nhanvien.dbf","w");
		i=0;
		tt:i++;
		printf("\n\t*Nguoi thu:%d",i);
		printf("\n-Ten  : ");
		scanf("%s",ten);
		printf("\-Tuoi : ");
		scanf("%d",&tuoi);
		printf("\-Luong: ");
		scanf("%f",&luong);
		fprintf(fp,"%10s%3d%10.2f",ten,tuoi,luong);
		printf("\nNhap tiep (bam 1), khong nhap (bam 0)");
		scanf("%d",&s);
		if (s==1)
			goto tt;
		fclose(fp);
		fp=fopen("nhanvien.dbf","r");
		fprintf(stdprn,"\n         DANH SACH NHAN VIEN");
		fprintf(stdprn,"\n         -------------------");
		while (feof(fp) == 0)
			{
				fscanf(fp,"%10s %3d %10f",ten,&tuoi,&luong);
				fprintf(stdprn,"\n-Ten:%6s -Tuoi:%3d -Luong:%7.2f",
														ten,tuoi,luong);
			}
		printf("\n\      IN TRICH NGANG");
		tt1:printf("\n+Can in nguoi thu: ");
		scanf("%d",&i);
		fseek(fp,(long)(i-1)*23,SEEK_SET);
		fscanf(fp,"%10s %3d %10f",ten,&tuoi,&luong);
		fprintf(stdprn,"\n");
		fprintf(stdprn,"\n\t* Nguoi thu: %d",i);
		fprintf(stdprn,"\n-Ten:%6s -Tuoi:%3d -Luong:%7.2f",
														ten,tuoi,luong);
		printf("\n*In tiep (bam 1), khong in nua (bam 0)");
		scanf("%d",&s);
		if (s==1)
			goto tt1;
	}