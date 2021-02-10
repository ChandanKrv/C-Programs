void main()
{
int isprime(int);
int k,n;
clrscr();
printf("\n\t\tEnter The Number.....");
scanf("%d",&n);
k=n;
k++;
while(!isprime(k))
{
k++;
}
printf("%d Is Prime Number Greater Than Given Number\n",k);
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