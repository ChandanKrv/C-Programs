/*                      RUNGE KUTTA METHOD                            */
/*compute y(0,4) from the equation dy/dx=x^2+y^2 ,y(0)=1, taking h=0.1*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
float fx(float,float);
void main()
{
	 int i=0,n,l;
	 float h,x[30],y[30],k1,k2,k3,k4,x1;
	 clrscr();
printf("\n Enter the initial value of x,x=  ");
scanf("%f",&x[0]);
printf("\n Enter the initial value of y,y=   ");
scanf("%f",&y[0]);
printf("\n Enter the step length h,h=  ");
scanf("%f",&h);
printf("\n Enter the value of 'x'=> ");
scanf("%f",&x1);

	  n=(x1-x[0])/h;
	  for(i=0;i<=n;i++)
		 {
		   x[i+1]=x[i]+h;
		   k1=h*fx(x[i],y[i]);
		   k2=h*fx(x[i]+(h/2),y[i]+(k1/2));
		   k3=h*fx(x[i]+(h/2),y[i]+(k2/2));
		   k4=h*fx(x[i]+h,y[i]+k3);
		   y[i+1]=y[i]+(k1+2*k2+2*k3+k4)/6;
		   printf("\n Iteration=%d: y[%.2f]=%f\n",i+1,x[i+1],y[i+1]);
		 }
		  // printf("\n Result =>\t y(%.2f)=%f",x1,y[n]);
		  getch();
}
float  fx(float a,float b)
	{
	return((a*a)+(b*b));
	}


