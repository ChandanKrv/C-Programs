void main()
{
int i,j,n,k,a[10][10];
clrscr();
printf("\n          Enter The No. Of Rows.....");
scanf("%d",&n);
printf("\t\t\t\t");
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
if((i==1)&&(j==1))
{
a[i][j]=1;
printf("   %d ",a[i][j]);
}
else
if((i!=1)&&(j>=2))
{
for(k=3;k<=(2*i-1);k+=2)
{
a[i][j]=a[i][j-1]+k;
printf(" %3d ",a[i][j]);
j++;
}
}
else
{
j=1;
a[i][j]=a[i-1][j*(i-1)]+1 ;
printf(" %3d ",a[i][j]);
}
}
printf("\n\t\t\t\t");
}
getch();
}