#include <stdio.h>
void main (int argc,char *argv[])
{
FILE *fs;
char ch;
int i;
if (argc<2)
{
puts("Insufficient arguments");
exit();
}
for (i=1;i<=argc-1;i++)
{
fs=fopen(argv[i],"r");
clrscr();
  if (fs==NULL)
    {
      printf("\nCannot open Source file.....%s ",argv[i]);
       i++;
	fs=fopen(argv[i],"r");
    }
 else
  {
    printf("\nFollowings are the content of %s file.....",argv[i]);
    printf("\n");
  }
while(1)
{
ch=fgetc(fs);
if(ch==EOF)
break;
else
fputc(ch,stdout);
}
getch();
}
fclose(fs);
}