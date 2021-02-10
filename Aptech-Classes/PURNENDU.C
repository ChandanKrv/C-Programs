#include<stdio.h>
#include<conio.h>
void main()
	  {
	  int i,n,j;
	  float a[30],temp;
	  clrscr();
	  printf("enter how many numbers");
	  scanf("%d",&n);
	  printf("enter the numbers");
	  for(i=0;i<n;i++)
	  {
	  scanf("%f",&a[i]);
	  }
	  printf("\n the original numbers are:-\n");
	  for(i=0;i<n;i++)
	  {
	  printf("%f\t",a[i]);
	  }
	  for(i=0;i<n-1;i++)
	  {
	  for(j=i+1;j<n;j++)
	  {
	  if(a[i]>a[j])
	  {
	  temp=a[i];
	  a[i]=a[j];
	  a[j]=temp;
	  }
	  }
	  }
	  printf("\n the asending order of the list\n");
	  for(i=0;i<n;i++)
	  {
	  printf("%f\n",a[i]);
	  }
		  getch();
	  }