/*A PROGRAM TO PRINT THE CAPITAL VALUE OF A LETTER WHICH STARTS WITH
  AS EITHER A FIRST CHARACTER OR AFTER A SPACE*/
void main()
{
char *p;
int c,n=0;
clrscr();
printf("\n\tEnter The String.........");
gets(p);
c=strlen(p);
printf("\n\n\n\n\n\t\tThe Length Of The String Is...%d",c);
getch();
clrscr();
while(p[n]!='\x0')
{
    if(n==0)
    {
     printf("\t%c",toupper(p[n]));
     }
     else
     {
       if(p[n]!=' ')
	{
	  printf("%c",p[n]);
	}
	else
	{
	  printf("%c",p[n]);
	  n++;
	  printf("%c",toupper(p[n]));
	  n++;
	  while(p[n]!=' ')
	  {
	  printf("%c",p[n]);
	  if(p[n]=='\x0')
	  break;
	  n++;
	  }
	  n--;
	}
      }
      n++;
}
getch();
}