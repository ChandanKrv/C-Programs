struct employee
{
char name[30];
int basic;
};
typedef struct employee emp;

#include<stdio.h>
void main()
{
FILE *fp;
int i,n;
emp *e;
void display(emp *,int);
clrscr();
fp=fopen("anj6.dat","w+");
printf("\n\tEnter The Number Of Employee....");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
clrscr();
printf("\n\tEnter Employee %d Name......",i);
scanf("%s",e[i].name);
printf("\n\tEnter Employee %d Basic......",i);
scanf("%d",&e[i].basic);
fprintf(fp,"%s %d",e[i].name,e[i].basic);
}
clrscr();
for(i=1;i<=n;i++)
{
fscanf(fp,"%s %d",e[i].name,&e[i].basic);
display(&e[i],i);
}
}

void display(emp *ee,int ii)
{
clrscr();
printf("\n\tEmployee %d Name :-%s",ii,ee->name);
printf("\n\tEmployee  %d Basic :-%d",ii,ee->basic);
delay(1000);
}