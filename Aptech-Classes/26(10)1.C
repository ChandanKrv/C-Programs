int a[16];
void main()
{
int i,n;
int bin(int *);
clrscr();
printf("\n\t\tEnter The Value Of N :-");
scanf("%d",&n);
printf("\n\t");
bin(&n);
for(i=15;i>=0;i--)
printf("%d",a[i]);
getch();
}

bin(int *nn)
{
int i,j,k,l;
for(i=15;i>=0;i--)
{
j=1<<i;
l=*nn&j;
k=(l>0)?1:0;
a[i]=k;
}
return(*a);
}