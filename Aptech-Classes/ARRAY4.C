//program listing of data-str\array4.c

//Programs on arrays => To demonstrate the fill up logic of an array.

/*
   col ->   1  2  3  4     row   col
	 -------------    -----------
   row  1| 10  0  0 20       1   4
	2|  0 10 20  0       2   3 => 5-row
   ^    3|  0 20 10  0       3   2
   |    4| 20  0  0 10       4   1

*/

#include <stdio.h>
#include <conio.h>

int m[10][10];

void main(void)
  {
    int row,col;

    clrscr();

    for(row=1;row<=4;row++)
      {
	m[row][row]=10;
	m[row][5-row]=20;
      }

    for(row=1;row<=4;row++)
      {
	for(col=1;col<=4;col++)
	  printf(" %3d ",m[row][col]);

	printf("\n");
      }

    getch();
  }



