int l=0;
void main()
{
int a[500],i,n,j,temp,count=0;
clrscr();
printf("\n\t enter the no.s to be insert:- ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n\t enter value:- ");
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
   {
   for(j=(i+1);j<n;j++)
     {
     if(a[i]>a[j])
		 {
		 count++;
		 l++;
		 temp=a[j];
		 a[j]=a[i];
		 a[i]=temp;
		 }
     }
     printf("\n\n\t\t*************************************************");
   for(j=0;j<n;j++)
   {
   printf("\n\n\t\tData for pos %d is==>>%4d",j,a[j]);
   }
   printf("\n\n\t\t*************************************************");
   getch();
   }

for(i=0;i<n;i++)
printf("\n%d",a[i]);
printf("\n%d",l);
printf("\n\n\t\tThe Total No. Of Comparison Is....%d",count);
getch();
}
