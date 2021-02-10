#include<stdio.h>
void main()
{
char c=64;
int i=32;
unsigned int u=16;
clrscr();
if(c>i)
{
printf("pass 1");
if(c<u)
printf("pass 2");
else
printf("Fail 2");
}
else
printf("Fail ");
if(i<u)
printf("pass 2");
else
printf("Fail 2");
getch();
}
