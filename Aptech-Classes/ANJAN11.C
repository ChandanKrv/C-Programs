/*A PROGRAM TO ARRANGE THE ALPHABETS IN SORTED ORDER */
void main()
{
char p[30];
int i,c,temp,m,n;
clrscr();
printf("\n\t\tEnter The String....");
gets(p);
c=strlen(p);
printf("\n\n\t\tTHE LENGTH OF THE STRING IS...%d",c);
getch();
printf("\n\n\t\tTHE ASCII VALUE OF THE STRING IS...");
for(i=0;i<c;i++)
{
printf("\n\t\t\t%d",p[i]);
}
getch();
clrscr();
for(m=0;m<c;m++)
{
 for(i=0;i<=(c-m-1);i++)
  {
   if(p[i]>p[i+1])            /*IN CASE OF CAPS->SMALL,i=0;i<=(c-1);i++ SHOULD WRITE*/
    {                         /*IN CASE OF SMALL->CAPS,i=1;i<=c;i++ SHOULD WRITE*/
     temp=p[i];
     p[i]=p[i+1];
     p[i+1]=temp;
    }
  }
}
for(i=1;i<=c;i++)
 {
  printf("\n\t\tTHE ALPHABETICAL SORTED ORDERED IS AT LOCATION %d.. =%c",i,p[i]);
 }
getch();
}