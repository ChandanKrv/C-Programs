void main()
{
int temp,k,sm,loc,i,j,n,*a;
clrscr();
printf("\n\n\t\tEnter The Number Of Elements....");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("\n\tThe Element Is...");
scanf("%d",&a[i]);
}
for(i=1;i<=n-1;i++)
  {
	loc=i;
	sm=a[i];
	for(j=i+1;j<=n;j++)
	   {
	       if(a[j]<sm)
		{
		 loc=j;
		 sm=a[j];
		}  /*END OF IF */
	   }     /*END OF FOR */
       temp=sm;
       a[loc]=a[i];
       a[i]=temp;
       printf("\n********************************");
       for(k=1;k<=n;k++)
       printf("\n\t%d",a[k]);
       getch();
  }   /* END OF FOR */
printf("\n********************************");
for(i=1;i<=n;i++)
printf("\n\t%d",a[i]);
getch();
}