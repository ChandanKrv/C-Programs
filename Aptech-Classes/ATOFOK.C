#include <math.h>
#include <string.h>
double matof(char*);
void main()
{
  char *c1="   -96651.909635476";
  clrscr();
  printf("\nThe Floating Point Number(Converted) Is...%f",matof(c1));
  getch();
}
double matof(char *c)
{
  int i=0,j,l=-1,j1=0,minus=0;
  double temp=0.0;
  printf("\n\n\t\t%d",strlen(c));
  while(i<strlen(c))
  {
   if(*(c+i)=='-')
     minus=1;
   if(*(c+i)==32||*(c+i)=='+'||*(c+i)=='-') /*Here '32' means "SPACE"*/
     i++;
   else
     break;
  }
  j1=i;
  while(i<strlen(c) && *(c+i)!='.')
    i++;
  for(j=i-j1;j>0;j--)
  {
    temp=temp+pow10(j-1)*(*(c+i-j)-48);
    }
  for(j=i+1;j<strlen(c);j++)
  {
    temp=temp+pow10(l)*(*(c+j)-48);
    l--;
  }
  if(minus==1)
    temp=temp*(-1);
  return(temp);
}