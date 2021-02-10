/*              LAGRANGE'S INTERPOLATION                  */
#include<stdio.h>
#include<math.h>
void main()
{
float x[20],p[20],f[20],y,fy;
int i,n,k;
clrscr();
printf("\n\t\tEnter N\n");
scanf("%d",&n);
printf("\n\t\tEnter Y\n");
scanf("%d",&y);
printf("\nEnter x(i), f(i)\n");
for(i=1;i<=n;i++)
{
scanf("%f,%f",&x[i],&f[i]);
}
for(k=1;k<=n;k++)
{
p[k]=1.0;
for(i=1;i<=n;i++)
{
if (i==k)
continue;
p[k]=p[k]*(y-x[i])/(x[k]-x[i]);
}
}
fy=0.0;
for(i=1;i<=n;i++)
{
fy=fy+(p[i]*f[i]);
}
printf("\n\t\tThe Value at %f Is %f",y,fy);
getch();
}