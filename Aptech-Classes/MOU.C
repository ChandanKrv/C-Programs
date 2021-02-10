#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	int a,b,c,s,r,A;
	clrscr();
	printf("enter a,b,c");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	s=(a+b+c)/2;
	r=s*(s-a)*(s-b)*(s-c);
	A=sqrt(r);
	printf("%d",A);
	getch();
}