#include <stdio.h>
main()
{
char ch;
FILE *fptr;
clrscr();
printf("\n\n\tEnter The Character....");
scanf("%c",&ch);
fptr=fopen("PRI.IN","w");
if(fptr==NULL)
{
printf("\ncannot open file");
getch();
exit(1);
}
while(2)
 {
 fputc(ch,fptr);
 }
}