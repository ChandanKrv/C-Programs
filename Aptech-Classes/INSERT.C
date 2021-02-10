void main()
{
 int a[]={23,45,56,12,34},k,i,j,y,test=0;
 clrscr();
 for(j=0;j<=4;j++) printf("%d ",a[j]);
 printf("\n");
for(j=1;j<=4;j++)
 {
   y=a[j];
   i=j-1;
   test=0;
   while(i>=0&&test==0)
    {
      if(y<a[i])
	{
	  a[i+1]=a[i];
	  i=i-1;
	}
      else
	test=1;
    }
      a[i+1]=y;
      printf("\n");
      for(k=0;k<=4;k++)  printf("%d ",a[k]);  /* AFTER EVERY PASS SORTING */
  }
   printf("\n");
  for(j=0;j<=4;j++)    printf("%d ",a[j]);  /* AFTER SORTING */
  getch();
}