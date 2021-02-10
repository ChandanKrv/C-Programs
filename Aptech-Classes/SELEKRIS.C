void main()
{
int temp,i,j,k=0,loc,n,a[100];
clrscr();
//mini(int a[100],int k,int n,int loc)
printf("ntr the no:");
scanf("%d",&n);
printf("\nntr the array\n:");
for(i=0;i<n;i++)
{
printf("\n");
scanf("%d",&a[i]);
}
while(k<n-1)
{
loc=k;
mini(a,k,n,loc);
k=k+1;
}
clrscr();
printf("\n\n\t\tThe Sorted Array:\n\n\t\t");
for(i=0;i<n;i++)
printf(" %d ",a[i]);
getch();
}
mini(int a[],int k,int n,int loc)
{
int min,j,temp,i;
min=a[k];
loc=k;
j=k+1;
while(j<n)
{
if(min>a[j])
{
min=a[j];
loc=j;
}
j=j+1;
}
temp=a[k];
a[k]=a[loc];
a[loc]=temp;
printf("\n\n");
for(i=0;i<n;i++)
printf("\t%d",a[i]);
getch();
}