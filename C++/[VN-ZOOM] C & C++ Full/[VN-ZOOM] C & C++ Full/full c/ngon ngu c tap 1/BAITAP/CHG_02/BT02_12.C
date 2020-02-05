
main()
{
 int thap,cao,khoang;
 float fahr,celsius;

 thap=0;
 cao=320;
 khoang=20;
 fahr=thap;
 clrscr();
 printf("BANG DOI DO FRENHEIT RA CELSIUS\n");
 printf("\n");
 printf("==============================\n");
 printf("| Frenheit   |      Celsius  |\n");
 printf("------------------------------\n");
 while(fahr <= cao) /* Lenh vong lap,se hoc o chuong 4 */
 {
   celsius=(5.0/9)*(fahr-32.0);
   printf("| %4.0f       |       %6.1f  |\n",fahr,celsius);
	fahr=fahr+khoang;
 }
 printf("==============================\n");
 getch();
}