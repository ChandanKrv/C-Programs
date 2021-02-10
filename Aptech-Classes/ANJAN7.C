void main()
{
char b1,b2;
clrscr();
printf("\n\n\tPress X To Exit From The Program...");
while((b1=getch())!='X')
{
if(b1==0)
{
b2=getch();
printf("\n\n\tIT IS AN EXTENDED KEY & IT'S ASCII VALUE IS=%d",b2);
}
else
printf("\n\n\tIT IS A NORMAL KEY & IT'S ASCII VALUE IS=%d",b1);
}
}