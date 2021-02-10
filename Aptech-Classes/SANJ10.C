#include<ctype.h>
void main()
{
int i,j,k,l,c;
char *a;
clrscr();
printf("\n\n\n\t\t\tEnter The String.....");
gets(a);
k=strlen(a);
printf("\n\n\n\t\t\tThe Length Of The String....%d",k);
for(i=1;i<=127;i++)
{
  c=0;
    for(j=0;j<k;j++)
      {
	l=toascii(a[j]);
	if(l==i)
	c++;
      }
      if(c>0)
	printf("\n\n\n\t\t\tThe Freq. Of The String %c Is...%d",i,c);
}
getch();
}