//Program name :- day-3\star1.c
/*
	      i  *
	    --------
*    n=5      1  1
**            2  2     * => i
***           3  3
****          4  4
*****         5  5
	    --------
*/
#include <stdio.h>
void main(void)
  {
    int n,i,j;
    clrscr();
    printf("\n\n\t\tPlease enter the number of terms....");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
      {
	for(j=1;j<=i;j++)
	  {
	    printf("*");
	  }
	printf("\n");
      }
    getch();
  }