#include <stdio.h>
void main(){
  FILE *fs,*fd;
  //char s[80];
  char c;
  clrscr();
  fs=fopen("prac3.txt","r");
  if (fs==NULL){
	puts("File prac1 cannot be open");
	exit(2);}
  fd=fopen("prac4.txt","w");
 /* if (fd==NULL){
	puts("File prac2 cannot be open");
	exit(2);}*/
 /* while (fgets(s,79,fs)!=NULL)
  puts(s);
  getch();
   fputs(s,fd);*/
   while(!feof(fs))
   {
   c=fgetc(fs);
   fputc(~c,fd);
   }
  fclose(fs);
  fclose(fd);
  }
