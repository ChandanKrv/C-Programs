#include <stdio.h>
void main(int argc,char *argv[])
{
 FILE *fs,*ft;
 char ch;
 fs=fopen(argv[1],"r");
 ft=fopen(argv[2],"w");
 if(fs==NULL)
 {
   printf("file cannot be opened...");
   exit();
 }
 while((ch=fgetc(fs))!=EOF)
 fputc(~ch,ft);
 fclose(fs);
 fclose(ft);
 }