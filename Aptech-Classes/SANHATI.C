#include<Stdio.h>
#include<conio.h>
void main()
{
 int i,a[10];
 clrscr();
 printf("Enter the number");
 for(i=0;i<10;i++)
 {
 scanf("%d \n",& a[i]);
 }
 printf("the elements in the array are");
 for(i=0;i<10;i++)
 {printf("%d\n",a[i]);
 }
getch();
}