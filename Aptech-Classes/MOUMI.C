#include<stdio.h>
#include<conio.h>
void abubble(int a[30],int);
void dmarge(int x[30],int y[30],int z[30],int,int );
void main()
{
  int a[30],b[30],n=3,m=4,i,c[30];
  clrscr();
   printf("\n the 1st array");
  for(i=0;i<n;i++)
  {

    scanf("%d",&a[i]);
      }
       for(i=0;i<n;i++)
       printf("\n a[%d]=%d",i,a[i]);
  printf("\n the 2nd array");
  for(i=0;i<m;i++)
  {

    scanf("%d",&b[i]);
      }
      for(i=0;i<m;i++)
       printf("\n b[%d]=%d",i,b[i]);
       printf("\n\nAfter Sorting The Elements Are\n\n");
  abubble(a,n);
  printf("\n\n");
  abubble(b,m);
  dmarge(a,b,c,n,m);
}
void abubble(int a[],int n)
{
  int i,j,t;
  for(i=0;i<n-1;i++)
  {
	for(j=0;j<n-i-1;j++)
    {
       if(a[j]>a[j+1])
       {
	 t=a[j];
	 a[j]=a[j+1];
	 a[j+1]=t;
       }
    }
  }
  for(j=0;j<n;j++)
  {
    printf("\n a[%d]=%d",j,a[j]);
  }
}

void dmarge(int x[],int y[],int z[],int p,int q)
{
  int i,j,k;
  for(i=p-1,j=q-1,k=0;i>=0 && j>=0;)
  {
    if(x[i]>=y[j])
       z[k++]=x[i--];
    else
	z[k++]=y[j--];
    }
  for(;j>=0;)
   z[k++]=y[j--];
  for(;i>=0;)
    z[k++]=x[i--];
  for(k=0;k<p+q;k++)
     printf("\n %d",z[k]);
  getch();
}