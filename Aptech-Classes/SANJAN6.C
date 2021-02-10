void main()
{
int n,i,j;
clrscr();
printf("\n\n\t\t\tEnter The Number Of Lines...");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
printf(" *");
}
printf("\n");
}
getch();
}