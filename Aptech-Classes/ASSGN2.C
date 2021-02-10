void main()
{
 int i,j,n,k,l;
 clrscr();
 printf("Enter Lines To Be Printed....");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  k=i;
  printf("\n");
  for(j=1;j<=(n-i);j++)
  printf(" ");
  for(j=1;j<=i;j++)
       printf("%d",k++);
  --k;
  for(j=i+1;j<=2*i-1;j++)
       printf("%d",--k);
   }

 for(i=--n;i>=1;i--)
 {
  k=i;
  printf("\n");
  for(j=1;j<=(n-i+1);j++)
  printf(" ");
  for(j=1;j<=i;j++)
       printf("%d",k++);
  --k;              s
  for(j=i+1;j<=2*i-1;j++)
       printf("%d",--k);
   }
 getch();
}