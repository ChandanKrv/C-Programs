void main()
{
int n,i,j=0;
clrscr();
printf("\n\n\n\t\t\tEnter The Number Of Terms......");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("\n\n\n\t\t\tThe Result Is %d + %d = %d ",j,i,(j+i));
j+=i;
}
getch();
}