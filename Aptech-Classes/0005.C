#include<stdio.h>
#include<conio.h>
void main()
{
   int pas[7]={1,0,0,0,0,0,0};
   int i,j,k,sp=14;
   clrscr();
   for(i=0;i<=6;i++)
   {
	for(j=0;j<sp;j++)
	 {
	 printf(" ");
	 }
	 for(j=0;j<=i;j++)
	  {
	   printf("%d",pas[j]);
	  }
	   for(k=i+1;k>0;k--)
		{
		 pas[k]=pas[k]+pas[k-1];
		}
		printf("\n");
		sp=sp+1;
	}

   getch();

}


