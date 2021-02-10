		/* A PROGRAM FOR OCCURANCE OF PATTERN-MATCHING*/
void main()
{
char *str,*sub,*check;
int count=0,i=0,j=0,l;
clrscr();
printf("\n\tEnter The Main String....");
gets(str);
printf("\n\tEnter The Sub-String.....");
gets(sub);
aa:
while(str[i]!='\0')
{
   if(str[i]!=' ')
    {
     *(check+j)=*(str+i);
     j++;
     i++;
     goto aa;
    }
  *(check+j)='\0';
  puts(check);
  if(strcmp(check,sub)==0)
     count++;
     for(l=j;l>=0;l--)
     *(check+l)='\0';
     j=0;
 i++;
}

 if(str[i]=='\0')
  {
   puts(check);
   if((strcmp(check,sub)==0))
   count++;
  }
   printf("%d",count);
   getch();
}