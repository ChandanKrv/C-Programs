void main()
{
char *a;
int i,j,k,n;
clrscr();
printf("\n\n\n\n\t\t\tEnter The String.......");
gets(a);
printf("\n\n\n\n\t\t\tThe String Is..........");
puts(a);
n=strlen(a);
printf("\n\n\n\n\t\t\tThe Length Is.........%d",n);
for(i=0;i<n;i++)
{
printf("\n\t\t\t");
for(j=i;j<n;j++)
printf("%c",a[j]);
k=0;
while(k<=(i-1))
{
printf("%c",a[k]);
k++;
}
}
getch();
}