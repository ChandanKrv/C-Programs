void main()
{
int *a,n,xx,i,j,k,*aux,l1,l2,size,u1,u2;
clrscr();
printf("\n\n\t\tEnter The Number Of Element...");
scanf("%d",&n);
for(xx=1;xx<=n;xx++)
{
printf("\n\t\tThe Data At Position %d Is .....",xx);
scanf("%d",&a[xx]);
}
for(xx=0;xx<n;xx++)
a[xx]=a[xx+1];
size=1;
while(size<n)
{
l1=0;
k=0;
      while(l1+size<n)
	{
	 l2=l1+size;
	 u1=l2-1;
	 u2=(l2+size-1<n)?l2+size-1:n-1;
	  for(i=l1,j=l2;i<=u1 && j<=u2;k++)
	    if(a[i]<=a[j])
	      aux[k]=a[i++];
	    else
	      aux[k]=a[j++];
	for(;i<=u1;k++)
	  aux[k]=a[i++];
	for(;j<=u2;k++)
	  aux[k]=a[j++];
	l1=u2+1;
	}
  for(i=l1;k<n;i++)
   aux[k++]=a[i];
  for(i=0;i<n;i++)
   a[i]=aux[i];
  size*=2;
  printf("\n\n");
  for(xx=1;xx<=n;xx++)
    printf("\n\t\tThe Data At Position %d Is.....%d",xx,a[xx-1]);
  getch();
}
}