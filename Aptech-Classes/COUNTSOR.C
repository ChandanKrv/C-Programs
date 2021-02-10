void main()
{
 int x,i,*a,max=a[0],*temp,*new_arr;
 clrscr();
 printf("\n\t\tEnter The NO. Of Terms....");
 scanf("%d",&x);
 for(i=0;i<x;i++)
 {
 printf("\n\t\tEnter Value For %d Position...",i);
 scanf("%d",&a[i]);
 }
 for(i=0;i<x;i++)
	 {
	  if(max<a[i])
		  max=a[i];
	 }
 for(i=0;i<=max;i++)
	  temp[i]=0;
 for(i=0;i<x;i++)
	  temp[a[i]]=temp[a[i]]+1;
 for(i=1;i<=max;i++)
	  temp[i]=temp[i-1]+temp[i];
 for(i=0;i<=x;i++)
	  new_arr[i]=0;
 for(i=0;i<=x;i++)
	 {
	  new_arr[temp[a[i]]-1]=a[i];
	  temp[a[i]]=temp[a[i]]-1;
	 }
 for(i=0;i<x;i++)
	  a[i]=new_arr[i];
for(i=0;i<x;i++)
printf("\n\t\tThe Value Is...%d",a[i]);
getch();
}