#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int i,n,t,j,a[30];
clrscr();
printf("enter how many number");
scanf("%d",&n);
printf("enter the unsorted eliment");
for(i=0;i<n-1;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
 if (a[i]<a[j])
 t=a[i];
 a[i]=a[j];
 a[j]=t;
 }
 }
 printf("the ordered list:\n");
 for(i=0;i<n;i++)
 printf("%d",a[i]);
 getch();
 }