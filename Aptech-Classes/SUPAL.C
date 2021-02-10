void main()
{
int old=0,current=1,n;
void fibo(int ,int ,int);
clrscr();
printf("\n\n\t\tEnter How Many Term :");
scanf("%d",&n);
printf("\n\n\t\tThe Fibonacci Series Is:");
printf("\n%d\t%d\t",old,current);
fibo(old,current,n);
printf("\n\n\t\tPress Any Key To TaTa:");
getch();
}
void fibo(int old1,int current1,int n1)
{
static int term=3;
int new1;
if(term++<=n1)
{
printf("%d\t",old1+current1);
fibo(current1,old1+current1,n1);
}
}