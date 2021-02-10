#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],n,i;
void quick(int *,int,int);
int partition(int *,int,int);
clrscr();
printf("\nEnter The Number Of Elements = ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("\nEnter Value = ");
scanf("%d",&a[i]);
}
quick(a,1,n);
for(i=1;i<=n;i++)
printf("\n\t\Location number = %d and content = %d....",i,a[i]);
getch();
}

/*void quickso()
{
int i;
void quick(int *,int,int);
clrscr();
printf("\n\n\t---------- QUICK SORT PROGRAM------------------------");
quick(a,1,n);
printf("\n\t***************************************************");
for(i=1;i<=n;i++)
printf("\n\t\tLocation number = %d and content = %d....",i,a[i]);
printf("\n\t***************************************************");
printf("\n\t\tEnd Of Program.....");
getch();
}*/

void quick(int a[],int lower, int upper)
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



