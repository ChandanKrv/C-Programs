      /*  THIS PROGRAM GIVES THE CONCEPT OF "POINTER TO FUNCTION"  */
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
int disp(int,int);
int x,y;
clrscr();
printf("\n\tEnter First Value ....");
scanf("%d",&x);
printf("\n\tEnter Second Value ....");
scanf("%d",&y);
printf("\n\tThe Address Of Function Is.....%u",disp);
disp(x,y);
getch();
}

int disp(int a, int b)
{
if(a>b)
printf("\n\tThe Larger Is The First One...%d",a);
else
printf("\n\tThe Larger Is The Second One...%d",b);
}