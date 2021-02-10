/*program listing of data-str\selectio.c*/
/*Sort N Numbers In Ascending Order Using Selection Sort Algorithm.*/
/*
Example :=
~~~~~~~~~~
selection sort
==============
Here N = 6
loc. no.|step no.  1      2      3      4      5      6
-------------------------------------------------------------
    1   |         11    -98    -98    -98    -98    -98
    2   |         34     34      4      4      4      4
    3   |          5      5      5      5      5      5
    4   |        -98     11     11     11     11     11
    5   |         23     23     23     23     23     23
    6   |          4      4     34     34     34     34
------------------------------------------------------------
*/
void main()
  {
    int a[20],n,i;
    void display(int [],int);
    int anjan(int []);
    void sel_sort(int [],int,int);
    clrscr();
    n=anjan(a);
    for(i=1;i<=n-1;i++)
      {
	sel_sort(a,i,n); /*array,i=1,no. of elements*/
	display(a,n);
      }
    printf("\n\n\t\tEnd of the program....");
    getch();
  }
void sel_sort(int b[],int ii,int nn)  /*array,i=1,no. of elements*/
  {
    int locmin,item,j;
    int minloc(int [],int,int);
    void swapdata(int [],int,int);
    locmin=minloc(b,ii,nn); /*array,i=1,no. of elements*/
    if (locmin!=ii)
    swapdata(b,ii,locmin);  /*array,i=1,current location*/
  }
int minloc(int c[],int iii,int nnn)  /*array,i=1,no. of elements*/
  {
    int loc,k;
    loc=iii;
    for(k=iii+1;k<=nnn;k++)
      {
	if(c[loc]>c[k])
	{
	  loc=k;
	  }
      }
      printf("\n%d",loc);
     return(loc);
  }
void swapdata(int c[],int loc2,int loc1)
  {
    int temp;
    temp=c[loc1];
    c[loc1]=c[loc2];
    c[loc2]=temp;
  }
void display(int b[],int nn)
  {
    int k;
    printf("\n\t\t***************************************");
    for(k=1;k<=nn;k++)
      {
	printf("\n\t\tLocation number = %d and content = %d....",k,b[k]);
	getch();
      }
    printf("\n\t\t***************************************");
  }
int anjan(int b[])
  {
    int i,nn;
    printf("\n\n\t\tPlease enter the number of numbers.....");
    scanf("%d",&nn);
    for(i=1;i<=nn;i++)
      {
	printf("\t\tPlease enter data for location = %d ---> ",i);
	scanf("%d",&b[i]);
      }
    return(nn);
}