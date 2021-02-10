void main()
{
int i,j,k,l,m,n,o,p;
long c=0;
clrscr();
printf("\n\t\tEnter The Number....");
scanf("%d",&i);
for(k=0;k<=i;k++)
{
l=i-k;
for(n=0;n<=l;n++)
{
m=i-(k+n);
for(o=0;o<=m;o++)
{
if((o+n+k)==i)
{
c++;
printf("\n%2d + %2d + %2d= %2d", k,n,o,(k+n+o));
}
}
}
}
printf("\n\t\tTotal Combination Is.....%ld", c);
getch();
}