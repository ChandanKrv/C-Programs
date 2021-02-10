#include<math.h>
void main()
{
int j1,n,i,j,k=0,l,n1,n2,b[5],x=0,i1,c[5],x1,x2,d[5];
clrscr();
printf("\n\n\t\tEnter A Number...\t");
scanf("%d",&n);
n1=2*n;
n2=3*n;
printf("\n\t%d,\t%d",n1,n2);
i=(log10(n)+1);
if(i!=3)
{
printf("\n\n\t\tNumber Must Be Of 3 Digits.......");
getch();
exit(1);
}
while(n!=0)
{
k=n%10;
n/=10;
b[x]=k;
x++;
}
for(i1=0;i1<i;i1++)
{
for(j1=(i1+1);j1<=i;j1++)
{
  if(b[i1]==b[j1])
  {
  printf("\n\t\tAnjan Goswami");
  getch();
  exit(1);
}
}
}
x1=0;
while(n1!=0)
{
k=n1%10;
n1/=10;
c[x1]=k;
for(i1=0;i1<i;i1++)
{
  if(b[i1]==c[x1])
  {
  printf("\n\t\tAnanda Mitra");
  getch();
  exit(1);
  }
}
x1++;
}
for(i1=0;i1<i;i1++)
{
for(j1=(i1+1);j1<=i;j1++)
{
  if(c[i1]==c[j1])
  {
  printf("\n\t\tIndranil Bhattacharyya");
  getch();
  exit(1);
  }
}
}
x2=0;
while(n2!=0)
{
k=n2%10;
n2/=10;
d[x2]=k;
for(i1=0;i1<i;i1++)
{
  if(c[i1]==d[x2])
  {
  printf("\n\t\tPriyatosh Mondal");
  getch();
  exit(1);
}
}
for(i1=0;i1<i;i1++)
{
  if(b[i1]==d[x2])
  {
  printf("\n\t\tPriyanko Ganguly");
  getch();
  exit(1);
}
}
x2++;
}
for(i1=0;i1<i;i1++)
{
for(j1=(i1+1);j1<=i;j1++)
{
  if(d[i1]==d[j1])
  {
  printf("\n\t\tGoutam Adhikari");
  getch();
  exit(1);
  }
}
}
printf("\n\tThe Number Is A Triode...");
getch();
}