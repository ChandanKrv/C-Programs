void main()
{
int i=100,j,k,j1,k1,l;
clrscr();
while(i<=9999)
{
j=(i/100);
k=(i%100);
j1=(k/10);
k1=(k%10);
l=(tri(j)+tri(j1)+tri(k1));
if(l==i)
{
printf("\n\n\t\tThe Number Is...%d",i);
}
i++;
}
getch();
}
int tri(int x)
{
int y;
y=(x*x*x);
return(y);
}