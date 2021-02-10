struct node{
char ch[2];
int x;
};
void main()
{
int i;
struct node n1[5];
clrscr();
for(i=1;i<=3;i++)
{
scanf("\n%s",n1[i].ch);
scanf("\n%d",&n1[i].x);
}
for(i=1;i<=3;i++)
{
printf("\n%s",n1[i].ch);
printf("\n%f",n1[i].x);
printf("\n\n");
}
getch();
}