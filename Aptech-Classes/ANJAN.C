#include "stdio.h"
main()
{
FILE*ft;
int m;
ft=fopen("antu1.c","w");
if (ft==NULL)
{
printf("cannot create source table");
exit();
}
while(1)
{
m=fgetc(ft);
if (m==EOF)
break;
else
puts(m);
getch();
}
fclose(ft);
}

