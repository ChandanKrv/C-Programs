void main()
{
int *a[10],*b[10],*c[10];
int i,j,k,r1,r2,c1,c2;
aa:
clrscr();
printf("\n\tEnter Row Of Matrix=1......... ");
scanf("%d",&r1);
printf("\n\tEnter Column Of Matrix=1........ ");
scanf("%d",&c1);
printf("\n\tEnter Row Of Matrix=2....... ");
scanf("%d",&r2);
printf("\n\tEnter Column Of Matrix=2...... ");
scanf("%d",&c2);
if(c1!=r2)
{
printf("\n\tPlease Make C1 And R2 Equal ");
getch();
goto aa;
}
clrscr();
printf("\n\n\t\tCreation Of Matrix 1");
for(i=1;i<=r1;i++)
{
for(j=1;j<=c1;j++)
{
printf("\n\t Enter Number For Row %d And Col. %d .........",i,j);
scanf("%d",(*(a+i)+j));
}
}
clrscr();
printf("\n\n\t\tCreation Of Matrix 2");
for(i=1;i<=r2;i++)
{
for(j=1;j<=c2;j++)
{
printf("\n\t Enter Number For Row %d And Col. %d........ ",i,j);
scanf("%d",(*(b+i)+j));
}
}

clrscr();
printf("\n\tThe First Matrix Is.........");
printf("\n\n");
for(i=1;i<=r1;i++)
{
for(j=1;j<=c1;j++)
{
printf("\t%d",*(*(a+i)+j));
}
printf("\n");
}

printf("\n\tThe Second Matrix Is.........");
printf("\n\n");
for(i=1;i<=r2;i++)
{
for(j=1;j<=c2;j++)
{
printf("\t%d",*(*(b+i)+j));
}
printf("\n");
}
getch();
clrscr();
for(i=1;i<=r1;i++)
{
for(j=1;j<=c2;j++)
*(*(c+i)+j)=0;
}
for(i=1;i<=r1;i++)
{
for(j=1;j<=c2;j++)
{
for(k=1;k<=c1;k++)
*(*(c+i)+j)= *(*(c+i)+j) + *(*(a+i)+k) * (*(*(b+k)+j));
}
}
printf("\n\t\tThe Resultant Matrix Is...");
for(i=1;i<=r1;i++)
{
printf("\n");
for(j=1;j<=c2;j++)
printf("\t%d",*(*(c+i)+j));
}
getch();
}