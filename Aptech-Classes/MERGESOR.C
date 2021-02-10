#include<stdio.h>
#include<conio.h>
void merge_sort(int *, int);
void merge(int *, int *,int *);
void main()
{
int a[15]={54,87,12,9,34,67,29,44,98,53};
int i;
clrscr();
printf("array before sorting");
for(i=0;i<=9;i++)
printf("%d ",a[i]);
merge_sort(a,10);
getch();
}

void merge_sort(int a[],int n)
{
 int h,m,j,i;
 int u[5],v[5];
 h=n/2;
 m=n-h;
 if(n>1)
 {
  for(i=0,j=0;i<h,j<h;i++,j++)
  {
  u[i]=a[j];
  }
  for(i=0,j=h;i<h,j<n;i++,j++)
  {
  v[i]=a[j];
  }
 }
 merge_sort( u,h);
 merge_sort(v, m);
merge(u, v, a);
}
 void merge(int u[], int v[],  int a[])
{
int i,j,k;
for(i=j=k=0;k<=9;k++)
{
 if(u[i]<=v[j])
 {
 a[k++]=u[i++];
 }
 else
 {
 a[k++]=v[j++];
 }
if (i==5||j==5)
break;
}
for(;j<=4;)
 a[k++]=v[j++];
for(;i<=4;)
a[k++]=u[i++];
printf("array after sorting");
for(k=0;k<=9;k++)
printf("%d",a[k]);
}
