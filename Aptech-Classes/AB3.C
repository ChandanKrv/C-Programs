#include <stdio.h>
 void main()
 {
 int n,i,x,t=1;
 float s=1, p=1;
 clrscr();
 printf("enter the value of x&n");
 scanf("%d %d",&n,&x);
 for(i=1;i<=(n-1);i++);
 {
 t=t*x;
 p=t/i;
 s=s+p;
 }
 printf("the sum of the series is:%f",s);
 getch();
 }