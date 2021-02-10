/*program listing of data-str\spiral.c*/
/*Programs on arrays => To demonstrate the spiral fill up logic of an array.*/
/*                               col => column number
   col ->   1  2  3  4    rr cc  row => row number
	 -------------   ------- cc => increment/decrement factor along column
   row  1|  1  2  3  4    0  1   rr => increment/decrement factor along row
	2| 12 13 14  5    1  0
   ^    3| 11 16 15  6    0 -1
   |    4| 10  9  8  7   -1  0    row=row+rr   col=col+cc
	 -------------   -------
	 here n=4                 tt=rr  cc=-tt  rr=cc
   The logic will turn its head for the following two cases :
   CASE A: if (row>n || col>n || col<1 || row<1)    ----logic for limit check
   CASE B: if (a[row][col]!=0)                      ----preoccupied check
*/
int m[10][10];
void main()
  {
    int i,n,trow,row,rr,tcol,col,cc,tt;
    clrscr();
    printf("\n\n\t\tPlease enter the dimension number....");
    scanf("%d",&n);
    row=1;
    col=1;
    rr=0;
    cc=1;
    for(i=1;i<=n*n;i++)
      {
	m[row][col]=i;
	trow=row+rr;
	tcol=col+cc;
	if (trow>n || tcol>n || tcol<1 || m[trow][tcol]!=0)
	  {
	    tt=rr; rr=cc; cc=-tt;
	  }
	row=row+rr;
	col=col+cc;
      }
    for(row=1;row<=n;row++)
      {
	for(col=1;col<=n;col++)
	  printf(" %3d ",m[row][col]);
	printf("\n");
      }
    getch();
}