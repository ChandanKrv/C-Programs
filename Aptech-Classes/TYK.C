#include<stdio.h>
#include<conio.h>
#include<math.h>
  void main()
  {
   int a[30],i,n;
   clrscr();
   printf ("enter the how many elements");
   scanf ("%d",&n);
   printf ("enter the elements\n");
   for(i=0;i<n;i++)
	  {
	  printf ("\nenter a[%d] elements=>",i);
	  scanf("%d",&a[i]);
	  }
   printf ("the elements are \n");
   for(i=0;i<n;i++)
	  {
   printf ("a[%d]=>%d\n",i,a[i]);
	  }
   getch();
   }

