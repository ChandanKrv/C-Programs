void main()
{
int c=0,i,n,x,a[100],f,l,mid,index=1;
clrscr();
printf("\n\n\n\t\t\tEnter The NO. Of Numbers.......");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("\n\n\n\t\t\tEnter Element For Position %d.....",i);
scanf("%d",&a[i]);
}
printf("\n\n\n\t\t\tEnter The Search Key Element......");
scanf("%d",&x);
f=1;
l=n;
while(f<=l)
{
c++;
mid=(f+l)/2;
printf("\n\n\n\t\t\tThe NO. At Position %d Is %d.......",mid,a[mid]);
if(x==a[mid])
{
index=0;
break;
}
else
{
if(x<a[mid])
{
l=(mid-1);
printf("\n\n\t\t\tThe Upper Limit(l) Is %d",l);
}
else
{
f=(mid+1);
printf("\n\n\t\t\tThe Lower Limit(f) Is %d",f);
}
}
}
printf("\n\n\n\t\t\tThe No. Of Comparison Is....%d",c);
if(index==0)
printf("\n\n\n\t\t\tThe Key %d Found At %d Position....",x,mid);
else
printf("\n\n\n\t\t\tThe Key %d Has Not Been Found....",x);
getch();
}