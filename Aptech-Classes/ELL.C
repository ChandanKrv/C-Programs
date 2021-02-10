#include <graphics.h>
#include <stdlib.h>
#define ROUND(a)((int)(a+0.5))

void ellipseMidpoint(int xCenter,int yCenter,int Rx,int Ry)
{
	int Rx2=Rx*Rx;
	int Ry2=Ry*Ry;
	int twoRx2=2*Rx2;
	int twoRy2=2*Ry2;
	int p;
	int x=0;
	int y=Ry;
	int px=0;
	int py=twoRx2*y;

	void ellipsePlotPoints(int,int,int,int);
	ellipsePlotPoints(xCenter,yCenter,x,y);
	p=ROUND(Ry2-(Rx2*Ry)+(0.25*Rx2));
	while(px<py)
	{
		x++;
		px+=twoRy2;
		if(p<0)
			p+=Ry2+px;
		else
		{
			y--;
			py+=twoRx2;
			p+=Ry2+px-py;
		}
		ellipsePlotPoints(xCenter,yCenter,x,y);
	}

	p=ROUND(Ry2*(x+0.5)*(x+0.5)+Rx2*(y-1)*(y-1)-Rx2*Ry2);
	while(y>0)
	{
		y--;
		py-=twoRx2;
		if(p>0)
			p+=Rx2-py;
		else
		{
			x++;
			px+=twoRy2;
			p+=Rx2-py+px;
		}
		ellipsePlotPoints(xCenter,yCenter,x,y);
	}
}

void ellipsePlotPoints(int xCenter,int yCenter,int x,int y)
{
	putpixel(xCenter+x,yCenter+y,WHITE);
	putpixel(xCenter-x,yCenter+y,WHITE);
	putpixel(xCenter+x,yCenter-y,WHITE);
	putpixel(xCenter-x,yCenter-y,WHITE);
}

void main()
{
	int gd=DETECT,gm,x1,x2,x3,x4;
	initgraph(&gd,&gm,"c:\\tc\\bgi");
	printf("\t\nEnter X-axis value of Center :");
	scanf("%d",&x1);
	printf("\t\nEnter Y-axis value of Center :");
	scanf("%d",&x2);
	printf("\t\nEnter value of Rx :");
	scanf("%d",&x3);
	printf("\t\nEnter value of Ry :");
	scanf("%d",&x4);
	ellipseMidpoint(x1,x2,x3,x4);
	getch();
}
