void f1();
void f2();
#pragma startup f1
#pragma exit f2
void main()
{
clrscr();
printf("\n\tWE ARE IN MAIN FUNCTION");
//getch();
}
void f1()
{
printf("\n\tWE ARE IN FUNCTION==1");
getch();
}
void f2()
{
printf("\n\tWE ARE IN FUNCTION==2");
getch();
}
