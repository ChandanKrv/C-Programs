struct empl
{
int eno,bas,dno;
char ename[50];
};
typedef struct empl emp;


#include<stdio.h>
void main()
{
emp e;
FILE *fp;
char name[50];
int sal,i,n,num,flag=0,count=0,dep;
clrscr();
/*fp=fopen("anj5.dat","wb");
printf("\n\t\tEnter The Number Of Employee....");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
clrscr();
printf("\n\t\tCreating Employee = %d ", i);
printf("\n************************************************************");
printf("\n\t\tEnter Employee Number......");
scanf("%d",&e.eno);
printf("\n\t\tEnter Employee Name......");
scanf("%s",e.ename);
printf("\n\t\tEnter Employee Department Number......");
scanf("%d",&e.dno);
printf("\n\t\tEnter Employee Basic......");
scanf("%d",&e.bas);
fwrite(&e,sizeof(e),1,fp);
}
fclose(fp);
clrscr();*/


	    /* Searching A Particular Record By Employee Number */

aa:
clrscr();
fp=fopen("anj5.dat","rb");
printf("\n\t\tEnter The Employee Number To Be Searched.....");
scanf("%d",&num);
while((fread(&e,sizeof(e),1,fp))==1)
{
if(num==e.eno)
{
flag=1;
printf("\n\t\tSearch Is Valid.....");
printf("\n\tEmployee Number Is....%d",e.eno);
printf("\n\tEmployee  Name Is....%s",e.ename);
printf("\n\tEmployee Department Number Is....%d",e.dno);
printf("\n\tEmployee Salary Is....%d",e.bas);
break;
}
}
if(flag==0)
{
printf("\n\t\tSearch Is Invalid.....");
getch();
goto aa;
}
delay(1000);



	      /* Searching No. Of Employees In Particular Department */
clrscr();
printf("\n\t\tEnter The Department Number.....");
scanf("%d",&dep);
rewind(fp);
while(((fread(&e,sizeof(e),1,fp))==1))
{
if(dep==e.dno)
count++;
}
printf("\n\t\tTotal No. Of Employee In Dept. %d Is.....%d" ,dep,count);
delay(1000);
clrscr();



	    /* Searching Of Emp. Name Having Payment Greater Than 'X' */

printf("\n\tEnter Employee Name....");
scanf("%s",name);
rewind(fp);
while((fread(&e,sizeof(e),1,fp))==1)
{
if((strcmp(name,e.ename))==0)
{
sal=e.bas;
break;
}
}
rewind(fp);
while((fread(&e,sizeof(e),1,fp))==1)
{
if(e.bas>sal)
{
printf("\n\n*****************************************************");
printf("\n\tEmployee Number Is....%d",e.eno);
printf("\n\tEmployee  Name Is....%s",e.ename);
printf("\n\tEmployee Department Number Is....%d",e.dno);
printf("\n\tEmployee Salary Is....%d",e.bas);
delay(2500);
}
}
fclose(fp);
exit();
}