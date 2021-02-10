#include<stdio.h>
#include<conio.h>
void main()
{
int a[500],i,n,k,q;
clrscr();
printf("\n\t enter the no.of terms do you want to insert:- ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("\n\t enter no.:- ");
scanf("%d",&a[i]);
}
printf("\n\t enter the no.do you want to search:- ");
scanf("%d",&k);
i=1;
while((a[i]<k)&&(i<n))
{
q=1;
i=i+1;
}
if((i>n)||(a[i]>k))
{
q=0;
}
if(q==1)
{
printf("\n\t %d",i);
}
else
{
printf("\n\t not found");
}
getch();
}