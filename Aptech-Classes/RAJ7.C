showbits(int);
void main()
{

int n1;
clrscr();
printf("enter the no:");
scanf("%d",&n1);
printf("the coress int no is ");
showbits(n1);
getch();
}
showbits(int n)
{
int i,k,m;
for(i=15;i>=0;i--)
{
m=1<<i;
k=n&m;
(k==0)?printf("0"):printf("1");
}
}