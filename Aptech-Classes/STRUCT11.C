struct student
{
char name[50];
int roll;
int p1,p2,p3;
};
void main()
{
int i,j,k,n,tot;
struct student s[15];
clrscr();
printf("\n\t\tEnter The Number Of Students....");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
clrscr();
printf("\n\t\tEnter Name For Student %d....",i);
scanf("%s",s[i].name);
printf("\n\t\tEnter Roll For Student %d....",i);
scanf("%d",&s[i].roll);
printf("\n\t\tEnter Marks1 For Student %d....",i);
scanf("%d",&s[i].p1);
printf("\n\t\tEnter Marks2 For Student %d....",i);
scanf("%d",&s[i].p2);
printf("\n\t\tEnter Marks3 For Student %d....",i);
scanf("%d",&s[i].p3);
}


for(i=1;i<=n;i++)
{
clrscr();
printf("\n\t\t Name Of Student %d Is.....%s",i,s[i].name);
printf("\n\t\t Roll Of Student %d Is....%d",i,s[i].roll);
printf("\n\t\t Marks1 Of Student %d Is....%d",i,s[i].p1);
printf("\n\t\t Marks2 Of Student %d Is....%d",i,s[i].p2);
printf("\n\t\t Marks3 Of Student %d Is....%d",i,s[i].p3);
delay(2000);
}
clrscr();
printf("\n\t\tEnter The Searched Number....");
scanf("%d",&j);
for(i=1;i<=n;i++)
{
if(j==s[i].roll)
{
printf("\n\t\tSuccessful Searching....");
tot=s[i].p1+s[i].p2+s[i].p3;
printf("\n\t\tThe Total Marks Is....%d",tot);
getch();
exit(1);
}
}
clrscr();
printf("\n\t\tUnsuccessful Searching....");
getch();
}