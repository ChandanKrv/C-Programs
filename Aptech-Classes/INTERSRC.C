void main()
{
int c=0,i,n,x,*a,f,l,mid,index=1;
clrscr();
printf("\n\n\t\tEnter The NO. Of Numbers.......");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("\n\n\t\tEnter Element For Position %d.....",i);
scanf("%d",&a[i]);
}
printf("\n\n\t\tEnter The Search Key Element......");
scanf("%d",&x);
f=1;
l=n;
if(a[l]<=x<=a[f])
{
while(f<=l)
{
c++;
if(f==l)
mid=f;
else
mid=(f+((l-f)*((x-a[f])/(a[l]-a[f]))));
printf("\n\n\t\tThe NO. At Position %d Is %d.......",mid,a[mid]);
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
printf("\n\n\t\tThe Upper Limit(l) Is %d",l);
}
else
{
f=(mid+1);
printf("\n\n\t\tThe Lower Limit(f) Is %d",f);
}
}
}
printf("\n\n\t\tThe Total No. Of Comparison Is.......%d",c);
if(index==0)
printf("\n\n\t\tThe Key %d Found At %d Position....",x,mid);
else
printf("\n\n\t\tThe Key %d Has Not Been Found....",x);
getch();
}
}