void main()
{
char a1[100],a2[30];
int i,j,l1,l2,k;
clrscr();
printf("\n\t\tEnter The String....");
gets(a1);
printf("\n\t\tEnter The Sub-String.....");
gets(a2);
l1=strlen(a1);
l2=strlen(a2);
if(l1<l2)
{
printf("\n\t\tString Must Be Greater Than Sub-String...");
getch();
exit();
}
for(i=0;i<l1;i++)
{
 j=i;
 k=0;
 while(k<=l2)
 {
 if(a1[j]==a2[k])
 {
 j++;
 k++;
 }
 else
 if(k==l2)
 {
 printf("\n\t\tThe Sub-String Found At %d Position....",i+1);
 getch();
 break;
  }
 else
  break;
}
}
}