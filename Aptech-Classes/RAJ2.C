void main()
{
int a[4][4],i,j,r,c;
clrscr();
printf("enter the no of rows:");
scanf("%d",&r);
printf("enter the no of col:");
scanf("%d",&c);
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("enter val. for pos %d, %d =>",i,j);
//scanf("%d",&a[i][j]);
scanf("%d",(*(a+i)+j));
}
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
//printf("\t%d",a[i][j]);
printf("\t%d",*(*(a+i)+j));
}
printf("\n");
}
getch();
}