#include<conio.h>
#include<stdio.h>
#include<math.h>
void main()
{
long int a=5,i,n,s=0 ;
clrscr();
printf("Enter the no:");
scanf("%ld",&n);
for (i=1;i<=n;i++)
{
s=s+a;
printf("%ld+",a);

a=(a*10)+5;
}
printf("\b");
printf("\nthe sum=%ld",s);
getch();
}

