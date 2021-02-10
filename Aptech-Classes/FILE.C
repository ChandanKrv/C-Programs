#include<stdio.h>
#include<conio.h>
void main()
{
   FILE *f1,*f2,*f3;
   int n,i;
   clrscr();
   printf("\n contents of data file and if we press any negative no. to terminate");
   f1=fopen("data","w");
   for(i=1;i<=40;i++)
   {
	  scanf("%d",&n);
	  if(n<0)
	  break;
	  putw(n,f1);
   }
   fclose(f1);
   f1=fopen("data","r");
   f2=fopen("odd","w");
   f3=fopen("even","w");
   while((n=getw(f1))!=EOF)
   {
	   if(n%2==0)
	   putw(n,f3);
	   else
	   putw(n,f2);
   }
   fclose(f1);
   fclose(f2);
   fclose(f3);
   f2=fopen("odd","r");
   f3=fopen("even","r");
   printf("the contents of odd file");
   while((n=getw(f2))!=EOF)
   {
	  printf("%d",n);
   }
   printf("the content of even file:");
   while((n=getw(f3))!=EOF)
   {
	  printf("%d",n);
   }
   fclose(f2);
   fclose(f3);
   getch();
}