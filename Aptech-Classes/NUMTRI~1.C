void main()
{
 int i,j,k,n;
 clrscr();
 printf("enter the number of lines u want 2 print");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  printf("\n");
  k=i;
  for(j=1;j<=i;j++)
   {
    printf("%d",k);
    printf("  ");
   }
 }
 getch();
}