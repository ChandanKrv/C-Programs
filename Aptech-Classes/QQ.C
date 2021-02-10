#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 float a,b,c,s,x;
 clrscr();
 printf("\n Enter three nos?");
 scanf("%f %f %f",&a,&b,&c);
 s=(a+b+c)/2;
 x=s*(s-a)*(s-b)*(s-c);
 x=sqrt(x);
 printf("\n Area= %f",x);
 getch();
}