/*program listing of data-str\insertio.c*/
/*To Sort "N" Numbers In Ascending Order Using INSERTION SORT Algorithm.*/
/*
Example :=
~~~~~~~~~~~~
insertion sort
==============
Here N = 6
loc. no.|step no.  1      2      3      4      5      6
-------------------------------------------------------------
   1    |         11     11      5    -98    -98    -98
   2    |         34     34     11      5      5      4
   3    |          5      5     34     11     11      5
   4    |        -98    -98    -98     34     23     11
   5    |         23     23     23     23     34     23
   6    |          4      4      4      4      4     34
-------------------------------------------------------------
*/
void main()
  {
    int a[20],n,i,loc,item,j,k,flag;
    void display(int [],int);
    int xyz(int []);
    void ins_sort(int [],int);
    clrscr();
    n=xyz(a);
    /* n will return the value of numbers*/
    for(i=1;i<=n-1;i++)
      {
	ins_sort(a,i);
	display(a,n);
      }
    printf("\n\n\t\tEnd of the program....");
    getch();
  }


void ins_sort(int b[],int ii)
 {
    int loc,item,j;
    loc=ii+1;
    item=b[loc];
    for(j=ii;(b[j]>item && j>=1);j--)
      {
	b[loc]=b[j];
	loc=j;
	b[loc]=item;
      }
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



int xyz(int b[])
  {
    int i,nn;
    printf("\n\n\t\tPlease enter the number of numbers.....\t");
    scanf("%d",&nn);
    for(i=1;i<=nn;i++)
      {
	printf("\t\tPlease enter data for location = %d ---> ",i);
	scanf("%d",&b[i]);
       }
    return(nn);
}