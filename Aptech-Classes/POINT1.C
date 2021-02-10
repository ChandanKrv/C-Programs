/*Program name :- day-5\point1.c
/*programs on pointer....*/
/*
  int * a means "a" is a variable which contains an address and the content
  of the address is an integer quantity.
  100 = 64 + 32 + 4  => 0000 0000 0110 0100
			--------- ---------
			   2001      2000
  372 = 256 + 64 + 32 + 16 + 4 = 0000 0001 0111 0100
				 --------- ---------
				   2001      2000
  520 = 512 + 8 = 0000 0010 0000 1000
  fff4 => 1111 1111 1111 0100 => -12
	  0000 0000 0000 1011
			   +1
	  -------------------
	  0000 0000 0000 1100
  -------------------------------------------
  fff2 => 1111 1111 1111 0010 => -14
	  0000 0000 0000 1101
			   +1
	  -------------------
	  0000 0000 0000 1110
*/
#include <alloc.h>
void main()
  {
    int a,*p,*q,*c;
    clrscr();
    a=50;
    p=&a;
printf("\n\n\t\ta = %d, &a = %d, &p = %d, p = %d and *p = %d....",a,&a,&p,p,*p);
printf("\n\n\t\ta = %d, &a = %d, &p = %d, p = %d and *p = %d....",a,&a,&p,p,*p);
printf("\n\n\t\ta = %d, &a = %d, &p = %d, p = %d and *p = %d....",a,&a,&p,p,*p);
    /* allocate memory for string */
    if (((int *)p = (int *) malloc(sizeof(int))) == NULL)
      {
	printf("Not enough memory to allocate buffer\n");
	exit(1);  /* terminate program if out of memory */
      }
printf("\n\n\t\ta = %d, &a = %d, &p = %d, p = %d and *p = %d....",a,&a,&p,p,*p);
c=&a;
printf("\n\n\t\t&c = %d, c = %d, *c = %d, *(c+1) =%d....",&c,c,*c,*(c+1),*c);
c++;
printf("\n\n\t\t&c = %d, c = %d, *c = %d....",&c,c,*c);
printf("\n\t\tThe current content address in p is %d....",p);
p++;
    printf("\n\t\tThe current content address in p is %d....",p);
    ++p;
    printf("\n\t\tThe current content address in p is %d....",p);
    p=p+1;
    printf("\n\t\tThe current content address in p is %d....",p);
    q=&p;
    getch();
 }