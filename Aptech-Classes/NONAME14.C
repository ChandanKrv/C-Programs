#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float p,r,t,ci;
	clrscr();
	printf("enter p,r,t");
	scanf("%f%f%f",&p,&r,&t);
	ci=(p*(pow(1+r/100,t)));
	printf("\n%f",ci);
	getch();
 }