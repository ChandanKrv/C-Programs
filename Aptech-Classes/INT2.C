void main()
{
int i=3,x;
clrscr();
while(i>0)
{
x=func(i);
i--;
printf("\n\t%d",x);
}
getch();
}
int func(int n)
{
static sum=0;
sum+=n;
return(sum);
}