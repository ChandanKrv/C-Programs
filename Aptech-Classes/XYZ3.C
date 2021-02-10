/*A Program To Find The Reverse Of A Number*/
#include "stdio.h"
void main(void)
{
int sum,b,n,p;
long t,m,x;
clrscr();
printf("\nEnter A Number\n=");
scanf("%ld",&m);
t=m;
printf("\nEnter The Length Of The Number:-\n");
scanf("%d",&n);

b1=(t%10);
t/=10;
b2=(t%10);
t/=10;
b3=(t%10);
b4=(t/10);
sum=(b1*1000+b2*100+b3*10+b4);
printf("\nThe Reverse Number Is=\n%d",sum);
getch();
}
}