#include"graphics.h"
#define MAX 160
#define TRAI 0
#define DINH 0
#define PHAI 319
#define DAY 199
#define CAO (DAY-DINH+1)
#define RONG (PHAI-TRAI+1)
#define XC (RONG/2)
#define YC (CAO/2)
main()
	{
		int man_hinh, kieu;
		float ban_kinh;
		int ngang,doc;
		float tyle;
		man_hinh=CGA;
		kieu=CGAC0;
		initgraph(&man_hinh, &kieu,"d:\\tc\\");
		rectangle(TRAI,DINH,PHAI, DAY);
		ban_kinh=CAO/2;
		circle(XC,YC,ban_kinh);
		getaspectratio(&ngang,&doc);
		tyle=(float)doc/(float)ngang;
		ban_kinh *=tyle;
		circle(XC,YC,ban_kinh);
		getch();
		closegraph();
	}
