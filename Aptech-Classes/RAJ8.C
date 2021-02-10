#include<stdio.h>
#include<alloc.h>
void main()
{
FILE *fs,*ft,*ft1,*ft2;
char ch;
clrscr();
fs=fopen("R8.BAT","r");
if(fs==NULL)
{
puts("no file s");
getch();
exit();
}
ft=fopen("R81.BAT","w");
if(ft==NULL)
{
puts("no file t");
getch();
exit();
}
while(!feof(fs))
{
ch=fgetc(fs);
fputc(~ch,ft);
}
fclose(fs);
fclose(ft);
ft2=fopen("R81.BAT","r");
ft1=fopen("R82.BAT","w");
while(!feof(ft2))
{
ch=fgetc(ft2);
fputc(~ch,ft1);
}
fclose(ft2);
fclose(ft1);
}