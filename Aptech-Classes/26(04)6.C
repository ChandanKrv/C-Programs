void main()
{
char *p;
int i,j,k,l,m,n;
clrscr();
printf("\n\tEnter The String...");
gets(p);
n=strlen(p);
for(i=0;i<n;i++)
{
printf("\n");
for(j=i;j<n;j++)
printf("%c",p[j]);
for(k=0;k<i;k++)
printf("%c",p[k]);
}
getch();
}