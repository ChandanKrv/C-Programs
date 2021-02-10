#include<math.h>
void main()
{
long i,j,k;
clrscr();
printf("\n\t\tEnter The Number.....");
scanf("%ld",&i);
j=(log10(i)+1);
if(j!=5)
{
printf("\n\t\tWrong Entry.....");
getch();
exit();
}
k=sum(i);
printf("\n\t\tThe Result Is....%d",k);
getch();
}


sum(long n)
{
int s,t;
t=(n%10);
n=n/10;
if(n==1||n==2||n==3||n==4||n==5||n==6||n==7||n==8||n==9||n==0)
return(n+t);
else
s=sum(n)+t;
return(s);
}