/*Program name :- day-3\star3.c*/
/*
		  i  *     m = (n+1)/2 = 5
		--------
*      	    n=9   1  1
**          (odd) 2  2  * => i
***               3  3
****              4  4
*****           __5__5__
****              6  4
***               7  3  * => (n-i)+1
**                8  2
*                 9  1
		--------
*/
#include <stdio.h>
void main(void)
  {
    int s,m,n,i,j;
    clrscr();
    printf("\n\n\t\tPlease enter the number of terms....");
    scanf("%d",&n);
    m=(n+1)/2;
    for(i=1;i<=n;i++)
      {
	if (i>m) s=(n-i)+1; else s=i;
	for(j=1;j<=s;j++)
	  {
	    printf("*");
	  }
	printf("\n");
      }
    getch();
  }