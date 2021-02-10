main()
{
static i=3;
clrscr();
printf("%d",i--);
getch();
return i>0?main():0;
}