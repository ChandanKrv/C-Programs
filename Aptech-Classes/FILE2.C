#include <stdio.h>
void main()
{
  FILE *fs,*fd;
  char s[80];
  clrscr();
  fs=fopen("prac1.txt","r");
  if (fs==NULL)
  {
    puts("File prac1 cannot be open");
    exit();
  }
  fd=fopen("prac2.txt","a");
  if (fd==NULL)
  {
    puts("File prac2 cannot be open");
    exit();
  }
  while (fgets(s,79,fs)!=NULL)
    fputs(s,fd);
  fclose(fs);
  fclose(fd);
  }
