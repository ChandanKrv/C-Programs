//A PROGRAM TO GENERATE A SPARSE MATRIX AND MAKE TRANSPOSE OF THE MATRIX.....
 void main()
 {
 int a[10][10],b[10][10],i,j,n1,n2;
 clrscr();
 printf("\n\tEnter The Number Of Rows....");
 scanf("%d",&n1);
 printf("\n\tEnter The Number Of Columns....");
 scanf("%d",&n2);
 for(i=1;i<=n1;i++)
 {
  for(j=1;j<=n2;j++)
  {
  printf("\n\tThe Element In Row %d & Col %d Is...=>",i,j);
  scanf("%d",&a[i][j]);
  }
 }
 clrscr();
 printf("\n\n\tThe Sparse Matrix Is................\n\n");
 for(i=1;i<=n1;i++)
 {
  for(j=1;j<=n2;j++)
  {
  printf("\t%d",a[i][j]);
  }
  printf("\n\n");
  }
  printf("\n\tThe Transpose Of The Matrix Is........\n\n");
 for(i=1;i<=n2;i++)
 {
  for(j=1;j<=n1;j++)
  {
  b[i][j]=a[j][i];
  printf("\t%d",b[i][j]);
  }
  printf("\n\n");
  }
  getch();
  }