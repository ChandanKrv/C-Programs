void main()
{
 int n,i,j,k;
 clrscr();
 printf("enter the no. of lines u want 2 print====>");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  printf("\n\n");
  for(j=1;j<=2*(n-i);j++)
  printf(" ");
  for(j=i;j<=(2*i-1);j++)
  {
   if(j<=9)
   {
   printf("%d",j);
   printf(" ");
   }
   else
   {
   printf("%d",(j%10));
   printf(" ");
   }
  }
  for(j=(2*i-2);j>=i;j--)
  {
   if(j<=9)
   {
   printf("%d",j);
   printf(" ");
   }
   else
   {
   printf("%d",(j%10));
   printf(" ");
   }
   }
 }
 getch();
}