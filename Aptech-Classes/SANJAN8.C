/*PRINTING OF A PASCAL'S TRIANGLE.........*/
void main()
{
int a[10][10],i,j,n,k;
clrscr();
printf("\n\nENTER THE REQUIRED ROW YOU WANT TO PRINT......");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("\t");
for(k=1;k<=(n-i);k++)
printf(" ");
for(j=1;j<=i;j++)
{
 if(j==1||j==i)
 {
 a[i][j]=1 ;
 printf("%d",a[i][j]);
 printf(" ");
 }
 else
 {
 a[i][j]=(a[i-1][j-1]+a[i-1][j]);
 printf("%d",a[i][j]);
 printf(" ");
 }
 }
 printf("\n");
 }
 getch();
}