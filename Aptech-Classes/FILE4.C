#include<stdio.h>
void main(int argc,char *argv[])
{
FILE *fp;
char ch;
int noc=0;
int nob=0;
int now=0;
int n=argc;
clrscr();
fp=fopen(argv[1],"r");
if(fp==NULL)
{
printf("\n\tWrong Value Entered....");
getch();
exit(1);
}
printf("\n\t\tThe Numbe Of Argument Is.....%d",n);
printf("\n\n");
while((ch=fgetc(fp))!=EOF)
{
printf("%c",ch);
noc++;
if(ch==' ')
{
nob++;
now++;
}
}
printf("\n\n\t\t%d",noc);
printf("\n\n\t\t%d",nob);
printf("\n\n\t\t%d",++now);
getch();
fclose(fp);
}