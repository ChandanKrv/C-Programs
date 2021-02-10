#include<stdio.h>
#include<conio.h>
#include<graphics.h>
 void main()
 {
 int gd=DETECT,gm,x,y;
 int array[]={540,220,590,270,570,320,510,320,490,270,540,220};
 initgraph(&gd,&gm,"c:\\tc\\bgi");
 //printf("\n\t\tenter x....");
 //scanf("%d",&x);
 //printf("\n\t\tenter y....");
 //scanf("%d",&y);
 clrscr();
 x=getmaxx();
 y=getmaxy();
 setcolor(RED);
 rectangle(x/30,y/20,x/5,y/4);
 outtextxy(x/30+15,y/8+5,"Rectangle");
 circle(x/2,y/6,75);
 putpixel(x/2,y/6,GREEN);
 outtextxy(x/2-textwidth("Circle")/2,y/6+10,"Circle");
 arc(x/1.2,y/6,300,90,80);
 outtextxy(x/1.2,y/6,"Arc");
 line(x/30,10*y/15,x/6,10*y/5);
 outtextxy(x/30+10,10*y/15+10,"Line");
 ellipse(x/2,10*y+17,0,360,100,50);
 putpixel(x/2,10*y/17,YELLOW);
 outtextxy(x/2-textwidth("Ellipse")/2,10*y/17+10,"Ellipse");
 drawpoly(6,array);
 outtextxy(515,270,"Polygon");
 getch();
 closegraph();
 restorecrtmode();
 }