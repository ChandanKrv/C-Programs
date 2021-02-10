/*                 "NEWTON-RAPHSON" METHOD                  */
#include<math.h>
void main()
{
double f1(double),f2(double);
double x[100];
int k;
clrscr();
printf("\n\t\tEnter The Initial Guess....");
scanf("%f",&x[0]);
printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
x[1]=x[0]-(f1(x[0])/f2(x[0]));
k=0;
/*printf("\n\t\tk  x[k]  f1(x[k])\n");*/
while (fabs(x[k+1]-x[k])>=.00005)
{
k++;
x[k+1]=x[k]-(f1(x[k])/f2(x[k]));
printf("%3d,%10.6f,%10.6f\n", (k+1),x[k+1],f1(x[k+1]));
}
printf("\n\t\tThe Final Root Is.......%10.6f", x[k+1]);
getch();
}



double f1(double x)
{
return((x*x*x)+(12*x*x)+(13*x)+22);
}

double f2(double x)
{
return((3*x*x)+(24*x)+13);
}