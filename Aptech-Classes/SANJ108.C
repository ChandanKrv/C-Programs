//FILE HANDLING PROGRAM
#include<stdio.h>
void main()
{
FILE *fp;
int i,j;
char a[20],cho='y';
clrscr();
while(cho=='y')
{
fp=fopen("sanj1.dat","a");
printf("\n\n\n\t\t\tEnter Name :-");
gets(a);
printf("\n\n\n\t\t\tEnter Roll :-");
scanf("%d",&i);
printf("\n\n\n\t\t\tEnter Marks :-");
scanf("%d",&j);
fprintf(fp,"\n%s\t%d\t%d",a,i,j);
printf("\n\n\n\t\t\tDo U Want To Continue....");
fflush(stdin);
cho=getche();
}
fclose(fp);
fp=fopen("sanj1.dat","r+");
while(fscanf(fp,"\n%s\t%d\t%d",a,i,j)!=EOF)
printf("\n%s\t%d\t%d",a,i,j);
getch();
}