#include<stdio.h>
#include<graphics.h>
//#include<device.h>
#include<math.h>
#define round(a) (a+0.5)
void main()
{
int gdriver=DETECT,gmode;
int x1,x2,y1,y2;
void DDA(int,int,int,int);
initgraph(&gdriver,&gmode,"");
clrscr();
printf(" Enter The X1 Co-Ordinate :- ");
scanf("%d",x1);
printf(" Enter The X2 Co-Ordinate :- ");
scanf("%d",x2);
printf(" Enter The Y1 Co-Ordinate :- ");
scanf("%d",y1);
printf(" Enter The Y2 Co-Ordinate :- ");
scanf("%d",y2);
DDA(x1,x2,y1,y2);
getch();
}

void DDA(int a1,int b1,int a2,int b2)
{
 int dx=a2-a1,dy=b2-b1,step,k;
 float xc,yc,x=a1,y=b1;
 if(abs(dx)>abs(dy))
 step=abs(dx);
 else
 step=abs(dy);
 xc=dx/(float)step;
 yc=dy/(float)step;
 putpixel(round(x),round(y),123);
 for(k=0;k<step;k++)
 {
 x+=xc;
 y+=yc;
 putpixel(round(x),round(y),123);
 }
}
