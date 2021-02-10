#include "stdio.h"
/*Application of numerical problems*/
main()
{
int a,b,c,y;
float x1,x2,xf,xs;
printf("\nEnter the value of a\n");
scanf("%d",&a);
printf("\nEnter the value of b\n");
scanf("%d",&b);
printf("\nenter the value of c\n");
scanf("%d",&c);
y=(2*a);
printf("\nThe value of y is=\n%d",y);
getch();
x1=((b*b)-(4*a*c));
printf("\nThe value of x1 is=\n%f",x1);
getch();
if(x1<0)
printf("\nNo sollution is possible here....");
else
{
x2=(sqrt(x1));
printf("\nThe value of x2 is=\n%f",x2);
getch();
xf=((-b+x2)/y);
printf("\nThe first root is=\n%f",xf);
getch();
xs=((-b-x2)/y);
printf("\nThe second root is=\n%f",xs);
getch();
}
}