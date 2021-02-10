void main()
{
int i,j,n;
clrscr();
printf("\n                      Enter The No. Of Lines...");
scanf("%d",&n);
printf("\n\n\n\n\t\t\t");
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
if(i==j)
{
printf("1");
}
else
if(((i%2)==0)&&((j%2)==0)||((i%2)!=0)&&((j%2)!=0))
{
printf("1");
}
else
{
printf("0");
}
}
printf("\n\t\t\t");
}
getch();
}