#include <stdio.h>
#include <string.h>
void main()
{
 char ch,mo;
 int i=1679,m[4],n;
 clrscr();
 /*printf("\n\t\tThe Value Is....");*/
 /*scanf("%d",&i);*/
 m[0]=(i/1000);
 printf("\n\t\t%d",m[0]);
 n=(i%1000);
 printf("\n\t\t%d",n);
 getch();

 xyz:

 if(m[0]=='1')
 printf("ONE");
 else
 {
  if(m[0]=='2')
  printf("TWO");
  else
   {
    if(m[0]=='3')
    printf("THREE");
    else
     {
      if(m[0]=='4')
      printf("FOUR");
      else
       {
	if(m[0]=='5')
	printf("FIVE");
	else
	 {
	  if(m[0]=='6')
	  printf("SIX");
	  else
	   {
	    if(m[0]=='7')
	    printf("SEVEN");
	    else
	     {
	      if(m[0]=='8')
	      printf("EIGHT");
	      else
	       {
		if(m[0]=='9')
		printf("NINE");
	       }
	     }
	   }
	 }
       }
     }
   }
 }
 getch();
}