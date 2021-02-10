 /*SHORT N NO OF INTEGER*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,j,temp,arr[30];
 clrscr();
 printf("enter how many no  ");
 scanf("%d \t",&n);
 printf("\n enter the no \n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
  }
  printf ("the unshorted list are ");
  for (i=0;i<n;i++)
  {
  printf("%d\t",arr[i]);
  }
  for(i=0;i<n-1;i++)
  {
  for(j=i+1;j<n;j++)
  {
  if(arr[i]>arr[j])
  {
  temp =arr[i];
  arr[i]=arr[j];
  arr[j]=temp;
 }
   }
  }
  printf("\n\n the short list are  ");
  for(i=0;i<n;i++)
  {
  printf("%d\t",arr[i]);
  }
  getch();
  }
