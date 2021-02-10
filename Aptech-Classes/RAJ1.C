/*#include <stdio.h>
#include <conio.h>*/
void main()
{
int a,b,c;
clrscr();
printf("enter the value of a:");
scanf("%d",&a);
printf("enter the value of b:");
scanf("%d",&b);
/*if(a+b>1000)
printf("i am ok");
else
printf("u ar ok");*/
(a+b>1000)?printf("i am ok"):printf("ur ok");
getch();
}