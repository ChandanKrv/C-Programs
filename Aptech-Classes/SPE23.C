/*#include<stdio.h>
void main()
{
int i,x;
clrscr();
for(i=2;i<=906;i++)
{
x=907%i;
if (x==0)
{
printf("not prime");
getch();
exit(1);
}
}
printf("prime");
getch();
}*/
float expr;
#define hello(x) printf("expr=%d",expr);
void main()
{
float x=1,y=2;
clrscr();
expr=x/y;
hello(expr);
getch();
}