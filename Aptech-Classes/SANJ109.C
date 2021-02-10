//A MENU-DRIVEN PROGRAM FOR ELEMENTARY DATABASE MANAGEMENT
#include<stdio.h>
void main()
{
FILE *fp,*ft;
char another,choice;
struct emp
{
char name[40];
int age;
float bs;
}e;
char empnm[40];
long int rec;
if(fp==NULL)
{
fp=fopen("emp.dat","wb+");
	   if(fp==NULL)
	   {
	   puts("cannot open file");
	   exit();
	   }
}
rec=sizeof(e);
while(1)
{
cls();
gotorc(10,30);
printf("\n\n1. Add Records..");
gotorc(12,30);
printf("\n\n2. List Records..");
gotorc(14,30);
printf("\n\n3. Modify Records..");
gotorc(16,30);
printf("\n\n4. Delete Records..");
gotorc(18,30);
printf("\n\n0. Exits..");
gotorc(20,30);
printf("\n\n Your Choice..");
fflush(stdin);
choice=getche();
switch(choice)
{
case '1':fseek(fp,0,SEEK_END);
	 another='y';
	 while(another=='y')
	 {
	 printf("\n\nEnter name,age,basic");
	 scanf("%s %d %f",e.name,&e.age,&e.bs);
	 fwrite(&e,rec,1,fp);
	 printf("\n\nEnter Another Record....");
	 fflush(stdin);
	 another=getche();
	 }
	 break;
}
}}