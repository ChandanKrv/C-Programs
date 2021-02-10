//program listing of data-str\array2.c

//Programs on arrays => To demonstrate the fill up logic of an array.

/*
   col ->   1  2  3  4
	 -------------
   row  1|  1  5  9 13
	2|  2  6 10 14   => (col-1)*4 + row
   ^    3|  3  7 11 15
   |    4|  4  8 12 16

*/

#include <stdio.h>
#include <conio.h>

void main(void)
  {
    int row,col,m[10][10];

    clrscr();

    for(row=1;row<=4;row++)
      for(col=1;col<=4;col++)
	m[row][col]=(col-1)*4+row;

    for(row=1;row<=4;row++)
      {
	for(col=1;col<=4;col++)
	  printf(" %3d ",m[row][col]);

	printf("\n");
      }

    getch();
  }



