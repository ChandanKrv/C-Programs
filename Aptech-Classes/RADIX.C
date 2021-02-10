/*.............RADIX-SORT METHOD TO SORT THE LIST OF ELEMENTS...............*/
#include<stdio.h>
#include<math.h>
void main()
{
int temp,n,a[10],i,j,d,k,d1,d2,l;
clrscr();
printf("\n\n\tEnter The Number Of Elements=>\t");
scanf("%d",&n);
if(n>=10)
{
printf("\nIt Is Out Of Range.....");
getch();
exit(1);
}
printf("\n\n\tEnter The Numbers=>\n");
for(i=0;i<=(n-1);i++)
{
scanf("%d",&a[i]);
fflush(stdin);
}
for(j=0;j<=(n-1);j++)
{
d=(log10(a[j])+1);
if(d!=3)
{
printf("\n\n\tThe Number Must Be Of 3 Digits....");
getch();
exit(1);
}
}
for(i=1;i<=3;i++)
{
for(j=0;j<=(n-2);j++)
{
for(k=(j+1);k<=(n-1);k++)
{
d1=a[j]/pow(10,i-1);
d1%=10;
d2=a[k]/pow(10,i-1);
d2%=10;
if(d1>d2)
{
temp=a[j];
a[j]=a[k];
a[k]=temp;
}
}
}
printf("\n\nAfter Pass %d The Elements Are...\n",i);
for(l=0;l<=(n-1);l++)
printf("\n%d",a[l]);
getch();
}
}