#include<stdio.h>
void main()
{
FILE *input;
int i=1,j=1,n,x,a[100],q=1,c=0;
clrscr();
input=fopen("Sanj102.dat","a");
printf("\n\n\n\t\t\tEnter The NO. Of Numbers.......");
scanf("%d",&n);
while(i<=n)
{
printf("\n\n\n\t\t\tEnter Element For Position %d.....",i);
scanf("%d",&a[i]);
fprintf(input,"\n\n%d",a[i]);
i++;
}
printf("\n\n\n\t\t\tEnter The Search Key Element......");
scanf("%d",&x);
while(j<=n)
{
c++;
if(a[j]==x)
{
q=0;
break;
}
j++;
}
printf("\n\n\n\t\t\tTotal No. Of Comparisons Is....%d",c);
if(q==0)
printf("\n\n\n\t\t\tThe Key %d Found At %d Position....",x,j);
else
printf("\n\n\n\t\t\tThe Key Has Not Been Found....");
getch();
}