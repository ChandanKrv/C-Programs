
#include<stdio.h>
#include <conio.h>
void main()
{
int i,j,mat[3][3];
printf("enter the value of 1st matrix");
for (i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&mat[i][j]);
}
}
printf("the output matrix is\n");

for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",mat[i][j]);
}
printf("\n");
}
getch();
}