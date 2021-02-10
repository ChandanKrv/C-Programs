/*program listing of data-str\bubble.c*/
/*To sort numbers in the ascending order using bubble sort algorithm.
/*
  9  7  5  3  1                        i => 1 to n-1 | j => 1 to n-i
  ------------------------------------ ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  7  9  5  3  1                              1       |      4
  7  5  9  3  1    no of sub-scans = 4               |
  7  5  3  9  1    scan no. = 1              2       |      3
  7  5  3  1  9                                      |
  ------------------------------------       3       |      2
  5  7  3  1  9                                      |
  5  3  7  1  9    no of sub-scans = 3       4       |      1
  5  3  1  7  9    scan no. = 2			     |
  ------------------------------------ ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  3  5  1  7  9    no of sub-scans = 2
  3  1  5  7  9    scan no. = 3
  ------------------------------------
  1  3  5  7  9    no of sub-scans = 1
		   scan no. = 4
  ------------------------------------
  Interchange of two vaules in two variables a & b can be done in many ways :
  1> using swap function/command e.g. swap(&a,&b);
  2> using third variable e.g. temp=a; a=b; b=temp;
  3> without using third varible e.g.
	case (a) :- a=a+b; b=a-b; a=a-b;
	case (b) :- a=a*b; b=a/b; a=a/b;
	case (c) :- a=a-b; b=a+b; a=b-a;
	case (d) :- a=a/b; b=a*b; a=b/a;
	case (e) :- a=a xor b; b=a xor b; a=a xor b;
		    e.g.
		    a   b|a xor b     initially say a=1100 and b=1011
		  -----------------   a = 1100   0111   1011
		    0   0|   0        b = 1011   1100
		    0   1|   1
		    1   0|   1        a = a xor b
		    1   1|   0        b = a xor b
		  -----------------   a = a xor b
*/
void main()
  {
    int a[20],n,i,j,temp,k;
    clrscr();
    printf("\n\t\tEnter the number of numbers....");
    scanf("%d",&n);
    for(i=0;i<n;i++)
      {
	printf("\n\t\tEnter number for location no. = %d....",i);
	scanf("%d",&a[i]);
      }
    for(i=0;i<n-1;i++)
      {
	for(j=0;j<=(n-i-1);j++)
	   if (a[j]>a[j+1])
	    {
	      temp=a[j];
	      a[j]=a[j+1];
	      a[j+1]=temp;
	    }
       printf("\n\n\t\tThe Array After Pass %d Is.....",i);
       for(k=0;k<n;k++)
       printf("\n\nThe Data At Location %d Is %d",k,a[k]);
       getch();
      }
      clrscr();
    printf("\n\n\t\tSo the final sorted content of the array is....");
    for(i=0;i<n;i++)
      printf("\n\t\tLocation no. = %d and data =  %d",i,a[i]);
    getch();
  }