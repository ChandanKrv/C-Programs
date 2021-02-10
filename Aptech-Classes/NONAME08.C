#include<stdio.h>
#include<conio.h>
void swap(int,int);
void main()
{
int a,b;
printf("enter a\n");
scanf("%d",&a);
printf("enter b \n");
scanf("%d",&b);
swap(a,b);
printf("a=%d\d=%d\n",a,b);
getch();
}
void swap (int m, int n)

{
int t;
t=m;
m=n ;
n=t  ;
printf("a1=%d,b1=%d\n",m,n);
}
