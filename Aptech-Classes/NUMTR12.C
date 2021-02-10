void main()
{
 int i,j,k,n;
 clrscr();
 printf("enter the lines between 1 & 22  ");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  printf("\n");
  k=n;
  for(j=1;j<=i;j++)
  {
   printf("%d  ",k);
   k--;
  }
 }
 getch();
}


