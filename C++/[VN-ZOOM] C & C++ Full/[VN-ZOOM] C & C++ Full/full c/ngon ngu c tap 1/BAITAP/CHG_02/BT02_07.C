
#include"stdio.h"
main()
{
  clrscr();
  cprintf(" Day la nua tren dau tich phan : ma Ascii ,"
	  "he 16 la F4  \xF4 \n");
  cprintf("\n\r\ Day la nua duoi dau tich phan : ma Ascii,"
	  "he 16 la F5  \xF5 \n");
  cprintf("\n\r           Day la ca dau tich phan ");
  cprintf("\n\r");
  cprintf("                      \xF4"); /*tao nguyen dau tich phan */
  cprintf("\n\b\xF5");
  getch();
}