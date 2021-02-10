void main()
{
int j,i,jj;
clrscr();
for(i=2;i<=30;i++)
{
clrscr();
printf("\n\t\t\tTable Of %d",i);
printf("\n\t\t\t===========\n");
for(j=1;j<=10;j++)
{
jj=(j+10);
printf("\n\t%2d*%2d=%3d\t\t%2d*%2d=%3d",i,j,i*j,i,jj,i*jj);
}
printf("\n\n\tPress Any Key To Continue....");
getch();
}
}