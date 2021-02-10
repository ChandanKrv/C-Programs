struct stu
{
char name[50];
int roll,p1,p2,p3;
};
typedef struct stu st;
void main()
{
void search(st *,int,int);
int i,n,j;
st s[20];
clrscr();
printf("\n\t\tEnter The Students Number....");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
clrscr();
printf("\n\t\tCreating Student %d  ",i);
printf("\n\t**********************************");
printf("\n\t\tName :-");
scanf("%s",s[i].name);
printf("\n\t\tRoll :-");
scanf("%d",&s[i].roll);
printf("\n\t\tPaper 1 :-");
scanf("%d",&s[i].p1);
printf("\n\t\tPaper 2 :-");
scanf("%d",&s[i].p2);
printf("\n\t\tPaper 3 :-");
scanf("%d",&s[i].p3);
}

for(i=1;i<=n;i++)
{
clrscr();
printf("\n\t\tDisplaying Student %d  ",i);
printf("\n\t**********************************");
printf("\n\t\tName :- %s",s[i].name);
printf("\n\t\tRoll :-%d", s[i].roll);
printf("\n\t\tPaper 1 :-%d",s[i].p1);
printf("\n\t\tPaper 2 :-%d",s[i].p2);
printf("\n\t\tPaper 3 :-%d",s[i].p3);
delay(1500);
}
clrscr();
printf("\n\t\tPlease Enter The Roll Number....");
scanf("%d",&j);
search(s,j,n);
}

void search(st *ss,int jj,int nn)
{
int i,tot=0;
for(i=1;i<=nn;i++)
{
if(jj==ss[i].roll)
{
tot=((ss[i].p1)+(ss[i].p2)+(ss[i].p3));
printf("\n\t\tSuccessfully Searched....");
printf("\n\t\tThe Total For Roll %d Is %d",jj,tot);
getch();
exit(1);
}
}
printf("\n\t\tUnsuccessfully Searched....");
getch();
}