#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
  int find(char*,char*);
  char *str,*substr;
  clrscr();
  printf("Enter The Main String...");
  gets(str);
  printf("Enter The Sub String...");
  gets(substr);
  printf("The string occurs in %dth position",find(str,substr));
  getch();
}
int find(char *str,char *sub)
{
 int i=0;
 while(i<(strlen(str)-strlen(sub)))
   if(!strncmp((str+i),sub,strlen(sub)))
     return(i+1);
   else
     i++;
 return(-1);
}