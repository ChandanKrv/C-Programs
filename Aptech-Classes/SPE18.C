/*void main()
{
int i=0,j=0;
clrscr();
if(!i && !j)
printf("%d\t%d",i,j);
printf("\n%d\t%d",i,j);
getch();
} */
void p(int x,int y,int z)
{
printf("%d %d %d ",x,y,z);
getch();
}

void c(int x,int y,int z)
{
printf("%d %d %d ",x,y,z);
getch();
}

void main()
{
int i=10;
clrscr();
p(i++,++i,i++);
printf("%d\n",i);
i=10;
c(i++,i++,i++);
printf("%d\n",i);
getch();
}
