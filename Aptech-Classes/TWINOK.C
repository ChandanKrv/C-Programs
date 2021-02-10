void main()
{
int isprime(int);
int i=3,n;
clrscr();
printf("\n\t\tEnter The Range.....");
scanf("%d",&n);
while(i<=n)
{
if(isprime(i)&&isprime(i+2)&&(i+2)<=n)
printf("%d & %d Are Twin Primes\n",i,(i+2));
i+=2;
}
getch();
}

int isprime(int j)
{
int l,x=1;
if(j==2)
return(1);
for(l=2;l<=(j-1);l++)
{
if((j%l)==0)
{
x=0;
goto aa;
}
}
aa:
return(x);
}