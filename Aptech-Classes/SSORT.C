void main()
{
int a[100],n,i,j,k,loc,temp;
clrscr();
printf("\n\t enter the no.s do you want to insert:- ");
scanf("%d",&n);
printf("\n");
for(i=1;i<=n;i++)
{
printf("\n\t enter value for position %d:- ",i);
scanf("%d",&a[i]);
}
for(i=1;i<=n-1;i++)
{
loc=i;
printf("\n\n\n\t\t\tLoc Is......%d",i);
    for(j=i+1;j<=n;j++)
      {
	if(a[loc]>a[j])
	  {
	    loc=j;
	  }
      }
printf("\n\n\n\t\t\tMinimum Location Is %d.....",loc);
     temp=a[loc];
     a[loc]=a[i];
     a[i]=temp;
     for(j=1;j<=n;j++)
     printf("\n\n\t\tThe No. Of Pos. %d Is %d....",j,a[j]);
     getch();
}
}