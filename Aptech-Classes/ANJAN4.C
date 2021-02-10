#include <stdio.h>
#include <string.h>
main()
{
char str1[20],str2[20];
int val;
clrscr();
printf("\n\n\t\tThe Strings Are ......\n\n");
scanf("%s\n%s",&str1,&str2);
val=strcmp(str1,str2);
printf("%d",val);
if(val==0)
printf("\n\n\tAnjan is a good boy...." );
if(val>0)
printf("\n\n\tAnjan is a bad boy....");
if(val<0)
printf("\n\n\tAnjan is the worst boy....");
getch();
}