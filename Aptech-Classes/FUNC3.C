#include<stdio.h>
#include<conio.h>
void main()
{
int fib(int);
int f1=0,f2=1,n,f3;
clrscr();
printf("\n\t enter the upper limit :- ");
scanf("%d",&n);
printf("\n\n\t\t\t\t%d",f1);
printf("\n\n\t\t\t\t%d",f2);
f3=fib(n);
getch();
}
fib(int n)
	 {
	 int i,x=0,y=1,z;
	 for(i=1;i<=(n-2);i++)
			     {
			     z=x+y;
			     x=y;
			     y=z;
			     printf("\n\n\t\t\t\t%d",z);
			     }
			     return(z);
	 }