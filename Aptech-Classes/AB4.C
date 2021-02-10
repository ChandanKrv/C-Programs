#include<stdio.h>
 void main()
 {
 int n,s=0,i,j,t=1;
 printf("enter the value of n");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 t=1;
 for(j=1;j<=i;j++)
 t=t*i;
 s=s+t;
 }
 printf("the sum of the series is:%d",s);
 }
