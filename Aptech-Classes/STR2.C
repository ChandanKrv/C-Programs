		/*STRING SORTING USING STRING POINTER*/
#include<stdio.h>
void main()
{
char *s[15];
int i,j,k;
char *temp,*temp1;
clrscr();
fflush(stdin);
printf("\n\tEnter The Number.....");
scanf("%d",&k);
for(i=0;i<k;i++)
{
printf("\n\tString %d Is...",i+1);
scanf("%s",temp1);
s[i]=(char *)malloc(strlen(temp1));
strcpy(s[i],temp1);
}
printf("\n");

for(i=0;i<k;i++)
{
printf("\n\tString %d Is...",i+1);
printf("%s",s[i]);
}
getch();
for(i=0;i<k;i++)
{
for(j=0;j<(k-i);j++)
if((strcmp(s[j],s[j+1]))>=1)
{
temp=s[j];
s[j]=s[j+1];
s[j+1]=temp;
}
}
for(i=1;i<=k;i++)
printf("\n\t\t%s",s[i]);
getch();
}