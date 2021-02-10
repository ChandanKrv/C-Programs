/*#include "stdio.h"
main()
{
int vc=0,cc=0,wc=0;
char ch;
clrscr();
printf("\nEnter The Character and print the result\n");
while((ch=getche())!='\r')
{
cc++;
if(ch==' ')
wc++;
if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u'))
vc++;
}
printf("\nTotal Character Count Is=\n%d",cc);
printf("\nTotal Vowel Count Is=\n%d",vc);
printf("\nTotal Word Count Is=\n%d", wc);
getch();
} */

/*void main()
{
int x,y,z,p;
clrscr();
z=scanf("%d\n%d\n%d",&x,&y,&p);
printf("\n\t%d",z); Z= NUMBER OF ELEMENTS SCANNED
getch();
}*/


void main()
{
int i=6;
//clrscr();
while(i>0)
{
printf(" %d",i);
i--;
main();
}
getch();
}