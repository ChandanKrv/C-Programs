long float m,x;
void main()
{
long float n,j;
long float pow(long float);
clrscr();
printf("\n\t\tEnter The Number.....");
scanf("%lf",&m);
printf("\n\t\tEnter The Power.....");
scanf("%lf",&n);
x=n;
if(n<0)
n*=-1;
else
n*=1;
j=pow(n);
if(x<0)
j=1/j;
else
j=1*j;
printf("\n\t\tThe Result Is.....%lf",j);
getch();
}

long float pow(long float n)
{
long float s=m;
if(n==0)
return(1);
if(n==1)
return(m);
else
{
s*=pow(n-1);
return(s);
}
}