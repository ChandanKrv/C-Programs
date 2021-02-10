struct stu
{
char name[50];
int roll,p1,p2,p3;
};
typedef struct stu st;

#include<stdio.h>
void main()
{
FILE *fp;
int i,j,k,l,n;
st s;
clrscr();
fp=fopen("fi1.dat","wb");
printf("\n\t\tEnter The Students Number..");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("--------CREATING STUDENTS== %d-----------------",i);
printf("\n\tEnter Name....");
scanf("%s",s.name);
printf("\n\tEnter Roll....");
scanf("%d",&s.roll);
printf("\n\tEnter Paper 1....");
scanf("%d",&s.p1);
printf("\n\tEnter Paper 2....");
scanf("%d",&s.p2);
printf("\n\tEnter Paper 3....");
scanf("%d",&s.p3);
fwrite(&s,sizeof(s),1,fp);
}
fclose(fp);
}