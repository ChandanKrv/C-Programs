#include <stdio.h>
void main()
{
 FILE *ft;
 char c;
 int large,noc,nocprv=0,line=0;
 clrscr();
 ft=fopen("anjan.txt","r");
 if(ft==NULL)
  exit(1);
 while((c=fgetc(ft))!=EOF)
 {
    line++;
    noc=0;
   while((c=fgetc(ft))!='.')
     noc++;
   if(noc>nocprv)
   {
     nocprv=noc;
     large=line;
   }
 }
 rewind(ft);
 while(large>1)
 {
  large--;
  while((c=fgetc(ft))!='.');
 }
 printf("The required line is.......");
 while((c=fgetc(ft))!='.')
 printf("%c",c);
 getch();
 fclose(ft);
 printf("\nNumber of char in that line is...%d ",nocprv+1);
 getch();
}