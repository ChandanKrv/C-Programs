void main()
{
int n,i,j;
clrscr();
printf("\n\nEnter The Number Of Lines...");
scanf("%d",&n);
printf("\t\t");
for(i=1;i<=n;i++)
{
for(j=1;j<=(n-i);j++)
printf("  ");
for(j=1;j<=i;j++)
printf(" *  ");
printf("\n\t\t");
}
getch();
}