
#include<stdio.h>
void main()
{
int z,x=1,y=1,i;
clrscr();
for(i=2;i<=100;i++)
{
x+=i;
y*=(i+1)/(i-1);
}
printf("\nValue Of X is => %d ",x);
printf("\nValue Of Y is => %d ",y);
getch();
}