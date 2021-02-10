#include<stdio.h>
#include<conio.h>
void main()
{
//clrscr();
int i,a[10];
printf("Enter the number");
for(i=0;i<10;i++)
{
scanf("%d\n",&a[i]);
}
printf("The elements in the array are");
for(i=0;i<10;i++)
{
printf("%d\n",a[i]);
}
getch();
}