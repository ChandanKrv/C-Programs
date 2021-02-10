#include<stdio.h>
void main()
{
int sum(int);
int x=8,y;
clrscr();
y=sum(x);
printf("%d",y);
getch();
}

int sum(int n)
{
int t;
if(n<=1) return 1;
t=sum(n-3)+sum(n-1);
return t;
}