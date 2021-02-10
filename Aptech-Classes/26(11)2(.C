struct employee
{
char name[30];
int basic,dno;
};
typedef struct employee emp;

#include<stdio.h>
void main()
{
char *nm,*nn;
FILE *fp;
int fl=0,i,n,dep,x=0,y,z;
emp e;
clrscr();
/*fp=fopen("anj6.dat","w");
printf("\n\tEnter The Number Of Employee....");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
clrscr();
printf("\n\tEnter Employee %d Name......",i);
scanf("%s",e[i].name);
printf("\n\tEnter Employee %d Basic......",i);
scanf("%d",&e[i].basic);
printf("\n\tEnter Employee %d Department Number......",i);
scanf("%d",&e[i].dno);
fprintf(fp,"%s %d %d",e[i].name,e[i].basic,e[i].dno);
}
fclose(fp);*/
fp=fopen("anj6.dat","r");
while((fscanf(fp,"%s %d %d ",e.name,&e.basic,&e.dno))!=EOF)
printf("\n%s %d %d ",e.name,e.basic,e.dno);
printf("\n\n\n\t\t\t");
fseek(fp,-24,SEEK_CUR);
printf("\n%s %d %d ",e.name,e.basic,e.dno);
/*fp=fopen("anj6.dat","r");
aa:
clrscr();
printf("\n\tEnter The Name To Be Searched.....");
scanf("%s",nm);
for(i=1;i<=n;i++)
{
fscanf(fp,"%s %d %d",e[i].name,&e[i].basic,&e[i].dno);
if((strcmp(nm,e[i].name))==0)
{
fl=1;
printf("\n\tThe Search Is Valid....");
printf("\n\tThe Name Is.....%s",nm);
printf("\n\tThe Basic Salary Is...%d",e[i].basic);
printf("\n\tThe Department Number Is...%d",e[i].dno);
getch();
clrscr();
break;
}
}
if(fl==0)
{
printf("Search  Is Invalid....");
delay(1000);
goto aa;
}
rewind(fp);
printf("\n\tEnter The Department Number....");
scanf("%d",&dep);
//for(i=1;i<=n;i++)
//{
while((fscanf(fp,"%s %d %d ",e.name,&e.basic,&e.dno))!=EOF);
{
if(dep==e.dno)
x++;
}
printf("\n\tTotal No. Of Employee At %d Number Is...%d",dep,x);
getch();
rewind(fp);
printf("\n\tEnter The Name Of The Employee...");
scanf("%s",nn);
for(i=1;i<=n;i++)
{
fscanf(fp,"%s %d %d ",e[i].name,&e[i].basic,&e[i].dno);
if((strcmp(nn,e[i].name))==0)
{
y=e[i].basic;
break;
}
}
printf("\n%d",y);
rewind(fp);
for(i=1;i<=n;i++)
{
fscanf(fp,"%s %d %d ",e[i].name,&e[i].basic,&e[i].dno);
if(e[i].basic>y)
{
printf("\n\tThe Name Is.....%s",e[i].name);
printf("\n\tThe Basic Salary Is...%d",e[i].basic);
printf("\n\tThe Department Number Is...%d",e[i].dno);
getch();
clrscr();
}
}*/
getch();
fclose(fp);
}
/*void display(emp *ee,int ii)
{
clrscr();
printf("\n\tEmployee %d Name :-%s",ii,ee->name);
printf("\n\tEmployee  %d Basic :-%d",ii,ee->basic);
delay(1000);
}*/