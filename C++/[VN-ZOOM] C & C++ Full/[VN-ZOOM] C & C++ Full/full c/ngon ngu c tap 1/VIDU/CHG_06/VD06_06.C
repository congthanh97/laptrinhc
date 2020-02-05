/* Cac ham goi lan nhau*/
void ham2(char Ch);
void ham1(char Ch)
{
	if (Ch<'z')
		ham2(Ch);
		putch(Ch);
}
void ham2(char Ch)
{
	ham1(++Ch);
}
main()
{
	clrscr();
	ham1('A');
	getch();
}