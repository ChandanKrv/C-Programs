/*Program name :- day-3\star2.c*/
/*
		  i  b  *
		-----------
*********   n=5   1  0  9
.*******          2  1  7  * => 2*(n-i)+1
..*****           3  2  5  b => i-1
...***            4  3  3
....*             5  4	1
		-----------
*/
/*nclude <stdio.h>*/
void main(void)
  {
    int n,i,j;
    clrscr();
    printf("\n\n\t\tPlease enter the number of terms....");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
      {
	for(j=1;j<=i-1;j++)
	  {
	    printf(" ");
	  }
	for(j=1;j<=2*(n-i)+1;j++)
	  {
	    printf("*");
	  }
	printf("\n");
      }
    getch();
  }