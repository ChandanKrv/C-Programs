/*area of a triangle*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float a,b,c,s,p,q;
clrscr();
printf("enter a");
scanf("%f",&a);
printf("enter b");
scanf("%f",&b);
printf("enter c");
scanf("%f",&c);
s=(a+b+c)/2;
p=s*(s-a)*(s-b)*(s-c);
q=sqrt(p);
printf
("area of triangle=%f",q);
getch();
}


