void main()
{
int i=1,j;
clrscr();
while(i<5)
{
j=1;
for(;j<5;j++)
{
if(i==j)
continue;
printf("\n%d\t%d",i,j);
}
i++;
}
getch();
}

/*void main()
{
int i,j;
clrscr();
for(i=1;i<=5;i++)
{
for(j=1;j<=5;j++)
{
if(i==j)
continue;
printf("\n%d\t%d",i,j);
}
}
getch();
	} */