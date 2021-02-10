/*dda*/
#include "graphics.H"
#include "stdlib.H"
#define ROUND(a)((int)(a+0.5))
void lineDDA(int xa,int ya,int xb,int yb)
{
int dx=xb-xa,dy=yb-ya,steps,k;
float xincrement,yincrement,x=xa,y=ya;
//int gd=DETECT,gm;
//initgraph(&gd,&gm,"c:\\tc\\BGI");
if(abs(dx)>abs(dy)) steps=abs(dx);
else steps=abs(dy);
xincrement=dx/(float)steps;
yincrement=dy/(float)steps;
putpixel(ROUND(x),ROUND(y),WHITE);
for(k=0;k<steps;k++)
{
x+=xincrement;
y+=yincrement;
putpixel(ROUND(x),ROUND(y),WHITE);
}
}
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\tc\\bgi");
lineDDA(20.0,100.0,30.0,180.0);
//void lineDDA(int xa,int ya,int xb,int yb)
getch();
}