int i;
void main()
{
int n,a[100];
clrscr();
printf("\n\t enter the no.do you want to insert...... ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n\t enter the no...... ");
scanf("%d",&a[i]);
}
radix(a,n);
}
      radix(int *a,int n)
	    {
	    int xy,bucket[10][15],buck[10];
	    int j,k,l,num,div,large,passes;
	    div=1,num=0,large=a[0];
	    for(i=0;i<n;i++)
	    {
	    if(a[i]>large)
	    large=a[i];
	    }
	    while(large>0)
	    {
	    num++;
	    large/=10;
	    }
	    for(passes=0;passes<num;passes++)
	    {
	    for(k=0;k<10;k++)
	    buck[k]=0;

	    for(i=0;i<n;i++)
	    {
	    l=(a[i]/div)%10;
	    bucket[l][buck[l]]=a[i];
	    buck[l]++;
	    }
	    i=0;
	    for(k=0;k<10;k++)
	    {
	    for(j=0;j<buck[k];j++)
	    {
	    a[i]=bucket[k][j];
	    i++;
	    }
	    }
	    printf("\n\n\t***************************************************");
	    printf("\n\n\t The Elements Are After Pass %d....",passes);
	    for(xy=0;xy<n;xy++)
	    printf("\n\n\tThe Element In Position %d Is.....%d",xy,a[xy]);
	    getch();
	    div=div*10;
	    }
	    }