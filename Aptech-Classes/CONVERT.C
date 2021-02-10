/*program listing of data-str\convert.c
To convert a given decimal number to a number of given base.*/
#include <stdio.h>
int my_stack[100],top=0;
void main()
  {
    int result,n,base;
    void convert(int,int);
    clrscr();
    printf("\n\n\t\tPlease enter a number....");
    scanf("%d",&n);
    printf("\n\n\t\tPlease enter a base value....");
    scanf("%d",&base);
    convert(n,base);
    printf("\n\n\t\tSo the required result is %d....");
    while(top!=NULL)
      {
	if (my_stack[top]<=9)
	  printf("%d",my_stack[top]);
	else
	  printf("%c",my_stack[top]+55);
	top--;
      }
    getch();
  }
void my_push(int item)
  {
    top++;
    my_stack[top]=item;
  }
void convert(int nn,int bb)
  {
    if(nn==0) return;
      my_push(nn%bb);
      convert((int)(nn/bb),bb);
  }