#include<math.h>
void main()
{
int n,m,x;
aa:
clrscr();
printf("\n\tEnter The Number.....");
scanf("%d",&n);
x=(log10(n)+1);
if(x!=5)
{
printf("\n\tFive Digit Code Must Be Entered.....");
getch();
goto aa;
}
m=sumi(n);
printf("\n\tThe Sum Of Digits Is....%d",m);
getch();
}

int sumi(int nn)
{
int s,r;
r=nn%10;
nn=nn/10;
if(nn==0)
return(r);
else
s=sumi(nn)+r;
return(s);
}