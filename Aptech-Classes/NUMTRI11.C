void main()
{
 int i,j,k,l,n,m;
  clrscr();
  printf("enter lines & the no. should be odd....  ");
  scanf("%d",&n);
  printf("\n");
  k=(n/2)+1;
  for(i=1;i<=k;i++)
  {
   printf("\n");
   for(j=1;j<=(k-i);j++)
   {
    printf(" ");
   }
   for(j=1;j<=i;j++)
   {
    printf("* ");
   }
  }
  m=(n-k);
  for(i=m;i>=1;i--)
  {
   printf("\n");
   for(j=1;j<=(m-i+1);j++)
   {
   printf(" ");
   }
   for(j=1;j<=i;j++)
   {
    printf("* ");
   }
  }
  getch();
}