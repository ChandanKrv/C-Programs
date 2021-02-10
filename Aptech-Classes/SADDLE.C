/*program listing of data-str\saddle.c*/
/*Programs on arrays => To find all saddle points of a given matrix.*/
/*
 Q> The "SADDLE POINT" of a matrix is that number at location r,c which is
   maximum along the row r and minimum along the col c or vice versa. If all
   numbers of a matrix are equal then each number will be the saddle point of
   the matrix. Find out all saddle points of a given matrix.
   example :
				  for i = 1 to 2
   col =>    1  2  3  4  maxmin   { -----
   --------------------- ------     row-max  row-min
   row   1 | 5  1  6  4  1) 1 6        -----
    ^    2 | 9  8  7  9  2) 7 9
    |    3 | 5  2  7  3  3) 2 7        -----
   ---------------------            col-min  col_max
				    -----
   saddle point = 7 at row = 2
		   and col = 3	    check
   saddle point = 6 at row = 1	  }
		   and col = 3
*/
void main()
  {
    int m[10][10],maxmin[10],r,c,i,flag,rmax,cmax,cmaxmin;
    clrscr();
    flag=1;
    printf("\n\n\t\tPlease enter the row dimension....");
    scanf("%d",&rmax);
    printf("\t\tPlease enter the column dimension....");
    scanf("%d",&cmax);
    printf("\n\n\t\tNow enter data for the matrix....\n\n");
    for(r=1;r<=rmax;r++)
      {
	for(c=1;c<=cmax;c++)
	  {
	    printf("\t\tEnter data for row = %d and col = %d....",r,c);
	    scanf("%d",&m[r][c]);
	  }
      }
    for(i=1;i<=2;i++)
      {
	for(r=1;r<=rmax;r++)
	  {
	    maxmin[r]=m[r][1];
	    for(c=2;c<=cmax;c++)
	      if(flag*maxmin[r]<flag*m[r][c])
	      maxmin[r]=m[r][c];
	  }
	for(c=1;c<=cmax;c++)
	  {
	    cmaxmin=m[1][c];
	      for(r=2;r<=rmax;r++)
	      {
	      if (flag*cmaxmin>flag*m[r][c])
	      cmaxmin=m[r][c];
	      }
	    for(r=1;r<=rmax;r++)
	      {
		if(m[r][c]==cmaxmin && cmaxmin==maxmin[r])
printf("\n\t\tSaddle point %d has been found at location row = %d & col = %d....",
		m[r][c],r,c);
	      }
	  }
	flag=-1;
      }
    getch();
 }