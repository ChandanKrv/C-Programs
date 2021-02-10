#include<stdio.h>
#include<conio.h>
void main()
{
 int i,a[10];
 clrscr();
 printf("enter the number");
 for(i=0;i<10;i++)
 {
 scanf("%d",&a[i]);
 }
 printf("The elements in the array are");
 for(i=0;i<10;i++)
 {
 printf("%d\n",a[i]);
 }
 getch();
 }