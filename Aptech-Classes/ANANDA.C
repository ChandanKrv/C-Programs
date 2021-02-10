void main()
{
 int i,j,k=1,n,r,p;
 clrscr();
 printf("enter the no. of lines u want 2 print    ");
 scanf("%d",&n);
 printf(" %d",k);
 for(i=2;i<=n;i++)
 {
  printf("\n\n");
  r=i%2;
  if(r==0)
  k=0;
  else
  k=1;
  p=k;
  for(j=1;j<=i;j++)
  {
   printf(" %d ",p);
   p=(1-p);
  }
 }
  getch();
}