#include <math.h>
void main()
{
int i;
double x;
long y;
float z;
clrscr();
printf("\n\n\t\t\tEnter A Number...");
scanf("%f",&z);
printf("\n\n\t\t\tThe Length Of The Integer Is...%d", sizeof(i));
printf("\n\n\t\t\tThe Length Of The Double Is....%d", sizeof(x));
printf("\n\n\t\t\tThe Length Of The Long Is......%d", sizeof(y));
printf("\n\n\t\t\tThe Length Of The Float Is.....%d", sizeof(z));
x=sqrt(z);
y=sqrt(z);
printf("\n\n\t\t\tThe Square Root (in Double) Is...<%-7.3f>", x);
printf("\n\n\t\t\tThe Square Root (in Long) IS.....%+5d",y);
if(z==0)
{
printf("\n\n\t\t\tThe Length Of The Number Is...1");
getch();
}
else
{
i=(log10(z)+1);
printf("\n\n\t\t\tThe Length Of The Number Is...%d" , i);
getch();
}
}