void main()
{
 int i,j,k,p,t,t1,n;
 clrscr();
 printf("enter the perimeter\t");
 scanf("%d",&n);
 if(n==3)
  printf("\n%d  %d  %d",1,1,1);
 if(n==4)
 {
  puts("a tringle can not have perimeter 4");
  getch();
  exit();
 }
 t=(int)n/2;
 for(i=1;i<t;i++)
  {
   t1=n-i;
   for(j=1;j<=t1;j++)
    {
     k=n-(i+j);
     if((i+j>k)&&(k!=0)&&(k+i>j)&&(k+j>i))
      {
	printf("\n%2d+%2d+%2d",i,j,k);
      }
    }
  }
  getch();
}