#include<stdio.h>
void main()
{
int x=5;
int y=37;
int z;
z=div(y,x);
printf("%d...",z.rem);
getch();
}






/*     #include <stdio.h>
#include <alloc.h>
#include <string.h>

int main(void)
{
   char *str;
    clrscr();
   /* allocate memory for string */
   //str = (char *) malloc(10);

   /* copy "Hello" into string */
   /*strcpy(str, "Hello");

   printf("String is %s\n  Address is %p\n", str, str);
   str = (char *) realloc(str, 20);
   printf("String is %s\n  New address is %p\n", str, str);
   getch();*/

   /* free memory */
   //free(str);

   //return 0;
//}
