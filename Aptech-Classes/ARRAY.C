//Program name :- day-4\array.c

/*

Program demo on array - subscripted variable
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
if we want to accept three marks of a particular student then

int m1,m2,m3;
scanf("%d %d %d",&m1,&m2,&m3);

Let us consider a school having 100 heads and 3 subjects each

Then we shall have to define 300 different variables e.g. int m1..m300

int m[3][100];    //two dimensional array

     0  1  2     		  0  1  2  ..  99  100
 --------------               --------------------------
 0 |           		      0 |                   ..
   |                            |
 1 |          		      1 |                   ..
   |                            |
 2 |          		      2 |                   ..
   |                          --------------------------
 . |
 . |
   |
 99|
 --------------

array fill up logic
~~~~~~~~~~~~~~~~~~~
subject wise fill up
====================
for(s=0;s<3;s++)
  for(r=0;r<100;r++)
    scanf("%d",&m[s][r]);

head wise fill up
=================
for(r=0;r<100;r++)
  for(s=0;s<3;s++)
    scanf("%d",&m[s][r]);

Array processing logic
----------------------
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Find out the roll number of the student got the max marks in each subject and
keep it in the array.

int m[3][101];

for(s=0;s<3;s++)
  {
    maxroll=0;

    for(r=1;r<100;r++)
      if (m[s][maxroll]<m[s][r]) maxroll=r;

    m[s][100]=maxroll;
  }

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Find out the max marks obtained by a student in a subject and keep these marks
in the array.

int m[4][100];

for(r=0;r<100;r++)
  {
    maxmarks=m[0][r];

    for(s=1;s<3;s++)
      if (maxmarks<m[s][r]) maxmarks=m[s][r];

    m[3][r]=maxmarks;
  }

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Array sorting
-------------

	bubble_sort(a,n)
  1.    flag=1;
  2.    count=1;
  3.    while(count<n &&  flag=1)
	  {
	    flag=0;

	    for(j=1;j<=n-count;j++)
	      {
		if (a[j]>a[j+1])
		  {
		    temp=a[j];
		    a[j]=a[j+1];
		    a[j+1]=temp;

		    flag=1;
		  }
	      }
	    count=count+1;
	  }
  4.     exit

    bubble(a,n)
      {
	flag=1;
	i=0;

	while(i<n-1 && flag==1)
	  {
	    flag=0;

	    for(j=0;j<=n-i-2;j++)
	      {
		if (a[j]>a[j+1])
		  {
		    temp=a[j];
		    a[j]=a[j+1];
		    a[j+1]=temp;

		    flag=1;
		  }
	      }
	    i++;
	  }
	printf("\n\n\t\tRequired number of iterations required is %d....",i);
      }

Insertion in an array
---------------------

location no.  0  1  2  3  4  5  6  7  8  9      maxloc = 10  n = 8  item = 100
 item value   .. .. .. .. .. .. .. ..
			     ^			loc = 5
			     |
			     item=100

if i denotes target location number then it ranges from 8 to 6 => n to loc+1

	for(i=n;i>=loc+1;i--)
	  a[i]=a[i-1];


if i denotes source location number then it ranges from 7 to 5 => n-1 to loc

	for(i=n-1;i>=loc;i--)
	  a[i+1]=a[i];

    array_insert(a,n,maxloc,loc,item)
      {
	if (n==maxloc)
	  {
	    printf("O V E R F L O W !!!!");
	  }
	else
	  {
	    for(i=n-1;i>=loc;i--)
	      a[i+1]=a[i];

	    a[loc]=item;

	    n++;
	  }
      }


Deletion in an array
---------------------

location no.  0  1  2  3  4  5  6  7  8  9      maxloc = 10  n = 8  item = ?
 item value   .. .. .. .. .. .. .. ..
			     ^			loc = 5
			     |
			     item=..

if i denotes target location number then it ranges from 5 to 6 => loc to n-2

	for(i=loc;i<=n-2;i++)
	  a[i]=a[i+1];


if i denotes source location number then it ranges from 6 to 7 => loc+1 to n-1

	for(i=loc+1;i<=n-1;i++)
	  a[i-1]=a[i];

     array_delete(a,n,loc,item)
       {
	 if (n==0)
	   {
	     printf("U N D E R F L O W !!!!");
	   }
	 else
	   {
	     item=a[loc];

	     for(i=n-1;i>=loc;i--)
	       a[i-1]=a[i];

	     n--;
	   }
       }


Insertion of an item in pre-sorted(ascending) array
---------------------------------------------------

insert_pre_sorted_array(a,n,maxloc,item)
  {
    if (n==maxloc)
      {
	printf("O V E R F L O W !!!!");
      }
    else
      {
	for(loc=0;loc<n && a[loc]<item;loc++);

	printf("\n\n\t\tData = %d has inserted at loc. = %d....",item,loc);

	for(i=n-1;i>=loc;i--)
	  a[i+1]=a[i];

	a[loc]=item;

	n++;
      }
  }


Dealing the same problem using one dimensional array
----------------------------------------------------

int m[300];

Data can be kept in roll major order
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Location no.  0-2  3-5  6-8  ....  297-299
    roll no.   0    1    2            99

	    roll  sub  location
	   ---------------------
	     0     0      0
	     1     2      5
	     10    1      31
	     r     s      ?  => 3*r+s
	   ----------------------

for(s=0;s<3;s++)
  for(r=0;r<100;r++)
    scanf("%d",&m[3*r+s]);


Data can be kept in subject major order
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Location no.  0-99  100-199  200-299
     sub no.   0       1        2

	    roll  sub  location
	   ---------------------
	     0     0      0
	     1     2      201
	     10    1      110
	     r     s      ?  => 100*s+r
	   ----------------------

for(r=0;r<100;r++)
  for(s=0;s<3;s++)
    scanf("%d",&m[100*s+r]);

*/

#include <stdio.h>
#include <conio.h>

void main(void)
  {
    int a[10],item,flag,temp,loc,maxloc,i,j,n;

    clrscr();

    printf("\n\t\tPlease enter the number of items....");
    scanf("%d",&n);

    printf("\n\t\tNow prepare yourself for the set of data....\n");

    for(i=0;i<n;i++)
      {
	printf("\t\tEnter data for location a[%d]....",i);
	scanf("%d",&a[i]);
      }

    printf("\n\n\t\tSo the current content of the array is....\n\t\t");

    for(i=0;i<n;i++)
      printf("%4d",a[i]);

    printf("\n\n\t\tSorting the content of the array in ascending order....");

    flag=1;
    i=0;

    while(i<n-1 && flag==1)
      {
	flag=0;

	for(j=0;j<=n-i-2;j++)
	  {
	    if (a[j]>a[j+1])
	      {
		temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;

		flag=1;
	      }
	  }
	i++;
      }

    printf("\n\n\t\tRequired number of iterations required is %d....",i);

    printf("\n\n\t\tSo the current content of the array is....\n\t\t");

    for(i=0;i<n;i++)
      printf("%4d",a[i]);

    printf("\n\n\t\tPlease enter the item value to be inserted....");
    scanf("%d",&item);

    if (n==maxloc)
      {
	printf("O V E R F L O W !!!!");
      }
    else
      {
	for(loc=0;loc<n && a[loc]<item;loc++);

	printf("\n\n\t\tData = %d has inserted at loc. = %d....",item,loc);

	for(i=n-1;i>=loc;i--)
	      a[i+1]=a[i];

	a[loc]=item;

	n++;
      }

    printf("\n\n\t\tSo the current content of the array is....\n\t\t");

    for(i=0;i<n;i++)
      printf("%4d",a[i]);

    printf("\n\n\t\tEnter the location no. for the deletion operation....");
    scanf("%d",&loc);

    if (n==0)
      {
	printf("U N D E R F L O W !!!!");
      }
    else
      {
	item=a[loc];

	printf("\n\n\t\tSo the deleted item value is %d....",item);

	for(i=loc+1;i<=n-1;i++)
	  a[i-1]=a[i];

	n--;
      }

    printf("\n\n\t\tSo the current content of the array is....\n\t\t");

    for(i=0;i<n;i++)
      printf("%4d",a[i]);

    getch();
  }
