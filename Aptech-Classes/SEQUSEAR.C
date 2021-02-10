//#include<stdio.h>
//#include<conio.h>
void main()
{
int a[500],n,i,k;
clrscr();
printf("\n\t enter the no.do you want to insert:- ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("\n\t enter no.:- ");
scanf("%d",&a[i]);
}
printf("\n\t enter the no. is to be search:- ");
scanf("%d",&k);
for(i=1;i<=n;i++)
{
if(a[i]!=k)
{
i=i+1;
}
if(a[i]==k)
{
printf("%d",i);
}
}
getch();
}