#include "stdio.h"
main()
{
FILE *ft,*fp;
char ch;
ft=fopen("antu1.c","r");
if(ft==NULL)
{
puts("cannot open source file");
exit();
}
fp=fopen("antu2.c","w");
if(fp==NULL)
{
puts("cannot open target file");
fclose(ft);
exit();
}
while(1)
{
ch=fgetc(ft);
if(ch==EOF)
break;
else
fputc(ch,fp);
}
fclose(ft);
fclose(fp);
}