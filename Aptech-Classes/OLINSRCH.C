void main()
{
int i,j=1,n,x,a[100],q=1,c=0;
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
while((j<=n)&&(x>a[j]))
{
c++;
j++;
}
if(a[j]==x)
q=0;
if(j>n)
printf("\n\n\n\t\t\tThe No. Of Comparisons Is......%d",c);
else
printf("\n\n\n\t\t\tThe No. Of Comparisons Is......%d",c+1);
if(q==0)
printf("\n\n\n\t\t\tThe Key %d Found At %d Position....",x,j);
else
printf("\n\n\n\t\t\tThe Key %d Has Not Been Found....",x);
getch();
}