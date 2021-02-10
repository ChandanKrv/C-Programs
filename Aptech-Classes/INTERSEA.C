void main()
{
int *a,i,n,k,mid,lower,upper,index=0;
clrscr();
printf("\n\t enter the no.s to be inserted:- ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("\n enter the no.");
scanf("%d",&a[i]);
}
printf("\n\t enter the no. to be search:- ");
scanf("%d",&k);
lower=1;
upper=n;
if(a[lower]<=k<=a[upper])
{
while(lower<=upper)
{
mid=lower+(((k-a[1])/(a[n]-a[1]))*(upper-lower));
if(a[mid]==k)
{
index=1;
break;
}
else
{
if(k<a[mid])
upper=mid-1;
else
lower=mid+1;
}
}
if(index==1)
{
printf("\n\t%d",mid);
}
else
{
printf("\n\t not found ");
}
getch();
}
}