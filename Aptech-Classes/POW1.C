void main()
{
long float x,m,n,r,i,j;
clrscr();
printf("\n\t\tEnter The Number.....");
scanf("%lf",&m);
printf("\n\t\tEnter The Power.....");
scanf("%lf",&n);
r=j=m;
x=n;
if(n==0)
{
printf("\n\t\tThe Result Is.....1");
getch();
exit();
}
if(n<0)
n*=-1;
else
n*=1;
for(i=1;i<n;i++)
r=(j*r);
if(x<0)
{
printf("\n\t\tThe Result Is.....%lf",(1/r));
getch();
exit();
}
printf("\n\t\tThe Result Is.....%lf",r);
getch();
}