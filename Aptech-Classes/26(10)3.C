void main()
{
int i,n;
clrscr();
printf("\n\tEnter The Number....");
scanf("%d",&n);
i=check(&n);
if(i==0)
printf("\n\t\tThe Number Is Even......");
else
printf("\n\t\tThe Number Is Odd.......");
getch();
}

check(int *nn)
{
int k;
k=*nn&1;
return(k);
}