void main()
{
char *a;
int i,j,k,n=0;
clrscr();
printf("\n\n\t\tEnter The String....");
gets(a);
k=strlen(a);
for(i=0;i<k;i++)
{
if((a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')&&(a[i+1]=='a'||a[i+1]=='e'||a[i+1]=='i'||a[i+1]=='o'||a[i+1]=='u'))
{
if(a[i]!=a[i+1])
{
printf("\t%c%c",a[i],a[i+1]);
n++;
}
}
}
printf("\n\n\t\tThe Count Of Vowels....%d",n);
getch();
}