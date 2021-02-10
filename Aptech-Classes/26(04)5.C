void main()
{
char *p,*q;
int i=0,j,n1,n2;
clrscr();
printf("\n\tEnter The String....");
gets(p);
printf("\n\tEnter The First Position.....");
scanf("%d",&n1);
printf("\n\tEnter The Second Position.....");
scanf("%d",&n2);
for(j=n1-1;j<n2;j++)
{
*(q+i)=*(p+j);
i++;
}
*(q+i)='\0';
printf("\n\tThe Extracted String Is.....%s",q);
getch();
}