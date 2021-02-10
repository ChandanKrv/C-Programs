/*program listing of data-str\array3.c*/

/*Programs on arrays => To demonstrate the fill up logic of an array.*/

/*
   col ->   1  2  3  4
	 -------------
   row  1|  1  2  3  4
	2|  2  2  3  4
   ^    3|  3  3  3  4
   |    4|  4  4  4  4

*/

#include <stdio.h>
#include <conio.h>

void main(void)
  {
    int row,col,m[10][10];

    clrscr();

    for(row=1;row<=4;row++)
      for(col=1;col<=4;col++)
	if (row>col) m[row][col]=row;
	else m[row][col]=col;

    for(row=1;row<=4;row++)
      {
	for(col=1;col<=4;col++)
	  printf(" %3d ",m[row][col]);

	printf("\n");
      }

    getch();
  }



