void main()
{
int isprime(int);
int i=0,j=1,k=0,n;
clrscr();
printf("\n\t\tEnter The Range.....");
scanf("%d",&n);
while(k<=n)
{
k=i+j;
if(isprime(k)&&k>2&&k<=n)
printf("%d Is Prime Number In The Fibbonacci Series\n",k);
i=j;
j=k;
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