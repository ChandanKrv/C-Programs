#include<stdio.h>
#include<conio.h>
void quick(int *,int ,int);
split (int *,int,int);
void main()
{
int *a;
int i,s;
clrscr();
printf("\n\n\t\tEnter The Number Of Numbers....");
scanf("%d",&s);
for(i=0;i<s;i++)
{
printf("\n\t\tThe Number Position %d Is...",i+1);
scanf("%d",&a[i]);
}
printf("Array Before Sorting     ");
for(i=0;i<s;i++)
printf("%d ",a[i]);
quick(a,0,s-1);
printf("\nArray After Sorting     ");
for(i=0;i<s;i++)
printf("%d ",a[i]);
getch();
}
void quick(int *a,int lower, int upper)
{
int i;
if(upper>lower)
 {
 i=partition(a,lower,upper);
 quick(a,lower,i-1);
 quick(a,i+1,upper);
 }
}
int partition(int a[],int lower, int upper)
{
int p,q,i,temp;
p=lower+1;
q=upper;
i=a[lower];
while(q>=p)
{
 while(a[p]<i)
 p++ ;
 while(a[q]>i)
 q--;
 if(q>p)
 {
  temp=a[p];
  a[p]=a[q];
  a[q]=temp;
 }
}
temp=a[lower];
a[lower]=a[q];
a[q]=temp;
return q;
}