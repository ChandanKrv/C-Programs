void main()
{
int i,n,x,a[100],f,l,mid;
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
rbinsrch(a,f,l,x);
}


rbinsrch(int a[],int low,int high,int y)
{
int index=1,mid,c=0;
while(low<=high)
{
 c++;
 mid=(low+high)/2;
 if(y==a[mid])
 {
 index=0;
 break;
 }
 else
 {
 if(y<a[mid])
 rbinsrch(a,low,mid-1,y);
 else
 rbinsrch(a,mid+1,high,y);
 }
}
  printf("\n\n\n\t\t\tThe No. Of Comparison Is.....%d",c);
  if(index==0)
   {
     printf("\n\n\n\t\t\tThe Key %d Found At %d Position.....",y,mid);
     getch();
     exit(1);
   }
 else
    {
     printf("\n\n\n\t\t\tThe Key %d Not Found.....",y);
     getch();
     exit(1);
    }
 }