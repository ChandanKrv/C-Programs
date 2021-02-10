void main()
{
 int i,j,n;
 clrscr();
 printf("enter the number of lines u want 2 print");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  printf("\n");
  for(j=1;j<=i;j++)
   {
    printf("%d",j);
    printf("  ");
   }
 }
 getch();
}