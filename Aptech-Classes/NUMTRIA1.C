void main()
{
 int i,j,k=1,n;
 clrscr();
 printf("enter lines   ");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  printf("\n");
  for(j=1;j<=i;j++)
  {
   printf("%d ",k);
   k++;
  }
 }
 getch();
}
