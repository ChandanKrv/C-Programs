#include <stdio.h>
main()
{
FILE *fptr;
char nm[30];
int i,rl=0,p1=0,p2=0,p3=0,tot=0,n=0;
float avg=0;
clrscr();
printf("\n\n\tEnter The Total Number Of Students.....");
scanf("\n\t%d",&n);
clrscr();
/**************************Write Mode************************************/
if((fptr=fopen("tukun1.in","w"))==NULL)
{
printf("\ncannot open file....");
exit(1);
}
for(i=0;i<n;i++)
{
printf("\nEnter The Name,Roll,Paper1,Paper2 & Paper3 Of The Student..\n");
scanf("%s\t%d\t%d\t%d\t%d",nm,&rl,&p1,&p2,&p3);
fprintf(fptr,"\n\t%s\t%d\t%d\t%d\t%d",nm,rl,p1,p2,p3);
clrscr();
}
fclose(fptr);
/***************************Read Mode***********************************/
fptr=fopen("tukun1.in","r");
while((fscanf(fptr,"\n\t%s\t%d\t%d\t%d\t%d",nm,&rl,&p1,&p2,&p3)!=EOF))
{
printf("\n\t\t%s\t%d",nm,rl);
tot=(p1+p2+p3);
avg=(tot/3.0);
printf("\t\t%d\t\t%.3f",tot,avg);
}
getch();
fclose(fptr);
}