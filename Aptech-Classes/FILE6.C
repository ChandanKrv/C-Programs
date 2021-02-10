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
printf("\n\tEnter Roll Number..");
scanf("%d",&j);
fp=fopen("fi1.dat","rb");
while((fread(&s,sizeof(s),1,fp))==1)
{
printf("\n%s\t%d\t%d %d %d ", s.name,s.roll,s.p1,s.p2,s.p3);
if(j==s.roll)
k=s.p1+s.p2+s.p3;
}
printf("\n\n\t\t%d",k );
fclose(fp);
getch();
}