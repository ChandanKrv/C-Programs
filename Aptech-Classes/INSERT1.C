void main()
{
 int count=0,*a,n,i,j,y,test=0;
 clrscr();
 printf("\n\n\t\tEnter The Number Of Elements....");
 scanf("%d",&n);
 printf("\n***********************************************************\n");
 for(j=1;j<=n;j++)
  {
    printf("\n\t\tThe Element for Position %d==> ",j);
    scanf("%d",&a[j]);
  }
     for(j=2;j<=n;j++)
	      {
		 y=a[j];
		 i=j-1;
		 test=0;
		 while(i>=1&&test==0)
		     {
		       if(y<a[i])
			{
			  count++;
			  a[i+1]=a[i];
			  i--;
			}
		       else
			 test=1;
		     }
	   a[i+1]=y;
	  }
  clrscr();
  for(j=1;j<=n;j++)
  printf("\n\t\tThe Value For %2d Is.........%d",j,a[j]);
  printf("\n\t\tTotal Comparison Is..........%d",count);
  getch();
  }