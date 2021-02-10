void main()
{
int n,f=0,l=1;
clrscr();
printf("\n\tEnter The Number Of Terms....");
scanf("%d",&n);
printf("\n\n%d %d ",f,l);
fib(f,l,n);
getch();
}

fib(int ff,int ll,int nn)
{
static int term=3;
int new;
while(term<=nn)
{
new=ff+ll;
printf("%d ",new);
term++;
fib(ll,new,nn);
}
return;
}