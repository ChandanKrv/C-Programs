
/*Program name :- day-3\star5.c*/
/*
		  i  b  *     m = (n+1)/2 = 5
		-----------
    *   n=9   1  4  1
   ***      (odd) 2  3  3  * => 2*i-1
  *****           3  2  5  b => m-i
 *******          4  1  7
*********       __5__0__9__
 *******          6  1  7
  *****           7  2  5  * => 2*(n-i)+1
   ***            8  3  3  b => i-m
    *             9  4  1
		-----------
*/
void main(void)
  {
    int b,s,m,n,i,j;
    clrscr();
    printf("\n\n\t\tPlease enter the number of terms....");
    scanf("%d",&n);
    m=(n+1)/2;
    for(i=1;i<=n;i++)
      {
	if (i<=m)
	  {
	    s=2*i-1;
	    b=m-i;
	  }
	else
	  {
	    s=2*(n-i)+1;
	    b=i-m;
	  }
	for(j=1;j<=b;j++)
	{
	    printf(" ");
	}
	for(j=1;j<=s;j++)
	{
	    printf("*");
	}
	printf("\n");
      }
    getch();
  }