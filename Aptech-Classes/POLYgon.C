/********Polygon Clipping Algorithm ******************************
******************************************************************
Name:  Anirban Datta
Class: M.Tech(Information Technology) 1st Year        Roll:  10
******************************************************************/
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#define TOP 0x8
#define BOTTOM 0x4
#define RIGHT 0x2
#define LEFT 0x1
unsigned char calcode(int,int,int,int,int,int);
unsigned char calcode(int x,int y,int left,int top,
int right,int bottom)
{
	unsigned char code=0x00;
	if(y<top)
		code|=TOP;
	else if(y>bottom)
		code|=BOTTOM;
	if(x>right)
		code|=RIGHT;
	else if(x<left)
		code|=LEFT;
	return code;
}
void main()
{
	unsigned char outcode0,outcode1,outcodeout;
	int accept=0,done=0,no,i,j;
	int pt[50],backup[50],left,top,right,bottom,x,y;
	int gd=DETECT,gm;
	printf("\nEnter no. of vertices in the polygon:");
	scanf("%d",&no);
	for(i=0;i<no;i++)
	{
		printf("\nEnter %dth co-ordinate of the polygon:",i+1);
		scanf("%d%d",&pt[2*i],&pt[2*i+1]);
		backup[2*i]=pt[2*i];
		backup[2*i+1]=pt[2*i+1];
	}
	printf("\nEnter co-ordinate of left top of window:");
	scanf("%d%d",&left,&top);
	printf("\nEnter co-ordinate of right bottom of window:");
	scanf("%d%d",&right,&bottom);
	initgraph(&gd,&gm,"c:\\tc\\bgi");
	outtextxy(10,10,"Original View:");
	setcolor(RED);
	rectangle(left,top,right,bottom);
	setcolor(WHITE);
	pt[2*no]=pt[0];
	pt[2*no+1]=pt[1];
	backup[2*no]=pt[0];
	backup[2*no+1]=pt[1];
	drawpoly(no+1,pt);
	getch();
	clearviewport();
	outtextxy(10,10,"Clipping View:");
	setcolor(RED);
	rectangle(left,top,right,bottom);
	setcolor(WHITE);
	for(j=0;j<no;j++)
	{
		accept=0;
		done=0;
		outcode0=calcode(backup[2*j],backup[2*j+1],left,top,right,bottom);
		outcode1=calcode(backup[2*j+2],backup[2*j+3],left,top,right,bottom);
		pt[2*j]=backup[2*j];
		pt[2*j+1]=backup[2*j+1];
		pt[2*j+2]=backup[2*j+2];
		pt[2*j+3]=backup[2*j+3];
		do
		{
			if(!(outcode0|outcode1))
			{
				accept=1;
				done=1;
			}
			else if(outcode0&outcode1)
				done=1;
			else
			{
				outcodeout=outcode0?outcode0:outcode1;
				if(outcodeout&TOP)
				{
					x=pt[2*j]+(pt[2*j+2]-pt[2*j])*(top-pt[2*j+1])/(pt[2*j+3]-pt[2*j+1]);
					y=top;
				}
				else if(outcodeout&BOTTOM)
				{
					x=pt[2*j]+(pt[2*j+2]-pt[2*j])*(bottom-pt[2*j+1])/(pt[2*j+3]-pt[2*j+1]);
					y=bottom;
				}
				else if(outcodeout&RIGHT)
				{
					y=pt[2*j+1]+(pt[2*j+3]-pt[2*j+1])*(right-pt[2*j])/(pt[2*j+2]-pt[2*j]);
					x=right;
				}
				else
				{
					y=pt[2*j+1]+(pt[2*j+3]-pt[2*j+1])*(left-pt[2*j])/(pt[2*j+2]-pt[2*j]);
					x=left;
				}
				if(outcodeout==outcode0)
				{
					pt[2*j]=x;
					pt[2*j+1]=y;
					outcode0=calcode(pt[2*j],pt[2*j+1],left,top,right,bottom);
				}
				else
				{
					pt[2*j+2]=x;
					pt[2*j+3]=y;
					outcode1=calcode(pt[2*j+2],pt[2*j+3],left,top,right,bottom);
				}
			}
		}
		while(done==0);
		if(accept)
			line(pt[2*j],pt[2*j+1],pt[2*j+2],pt[2*j+3]);
	}
	getch();
	closegraph();
	restorecrtmode();
}