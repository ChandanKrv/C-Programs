#include "stdio.h"
void main()
{
int x,arr[25],ar[25],a[25],arra[25],n;
int sum1=0,tot=0,sum=0;
float avg=0,av=0,ava;
clrscr();
puts("\nEnter The Number Of Students....\n");
scanf("%d",&n);
clrscr();
for(x=0;x<=n-1;x++)
{
puts("\nEnter The Number Of Paper1,Paper2,Paper3\n");
scanf("%d%d%d",&arr[x],&ar[x],&a[x]);
sum1=(arr[x]+ar[x]+a[x]);
printf("\nThe Summed Theoretical Marks Is....\n=%d",sum1);
getch();
puts("\nEnter The Practical Marks Of The Student\n");
scanf("%d",&arra[x]);
sum=(sum1+arra[x]);
printf("\nThe Summed Marks Of Each Student Is....\n=%d",sum);
getch();
tot=(tot+sum);
avg=(sum/4.0);
printf("\nThe Avarage Marks Of The Student Is....\n=%f",avg);
getch();
clrscr();
av=(avg+av);
}
printf("\nThe Total Sum Of All The Students is....\n=%d",tot);
getch();
ava=(av/n);
printf("\nThe Avarage Marks Of All Students Is....\n=%f",ava);
getch();
}