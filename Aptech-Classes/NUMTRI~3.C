void main()
{
 int n,i,j,k;
 clrscr();
 printf("enter the no. of lines u want 2 print");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  printf("\n");
  for(j=1;j<=2*(n-i);j++)
  printf(" ");
  for(j=1;j<=i;j++)
  {
   printf("%d",j);
   printf(" ");
  }
  for(j=(i-1);j>=1;j--)
  printf("%d ",j);
 }
 getch();
}