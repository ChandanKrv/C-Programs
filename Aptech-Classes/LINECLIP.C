   /*                        NAME:- BODHISATTWA RAKSHIT
			     CLASS:- M.TECH.(I.T.)
			     ROLL NO:- 08                     */
/****************************** LINE CLIPPING *******************************/

#include<stdio.h>
#include<graphics.h>

	typedef unsigned int outcode;
	enum { 	TOP=0x1, BOTTOM=0x2, RIGHT=0x4, LEFT=0x8 };

	void lineclip(x0,y0,x1,y1,xwmin,ywmin,xwmax,ywmax )
	float x0,y0,x1,y1,xwmin,ywmin,xwmax,ywmax;
	{

	   int gd,gm;
	   outcode code0,code1,codeout;
	   int accept = 0, done=0;

	   code0 = calcode(x0,y0,xwmin,ywmin,xwmax,ywmax);
	   code1 = calcode(x1,y1,xwmin,ywmin,xwmax,ywmax);

	   do{
		if(!(code0 | code1))
		{	accept =1 ; done =1; }
		else
		 if(code0 & code1)     done = 1;
		 else
		 {
		    float x,y;
		    codeout = code0 ? code0 : code1;
		    if(codeout & TOP)
		    {
			x = x0 + (x1-x0)*(ywmax-y0)/(y1-y0);
			y = ywmax;
		    }
		    else
		      if( codeout & BOTTOM)
		      {
			 x = x0 + (x1-x0)*(ywmin-y0)/(y1-y0);
			 y = ywmin;
		      }
		      else
			if ( codeout & RIGHT)
			{
			   y = y0+(y1-y0)*(xwmax-x0)/(x1-x0);
			   x = xwmax;
			}
			else
			{
			    y = y0 + (y1-y0)*(xwmin-x0)/(x1-x0);
			    x = xwmin;
			 }
		 if( codeout == code0)
		 {
		     x0 = x;  y0 = y;
		     code0=calcode(x0,y0,xwmin,ywmin,xwmax,ywmax);
		 }
		 else
		 {
		    x1 = x;   y1 = y;
		    code1 = calcode(x1,y1,xwmin,ywmin,xwmax,ywmax);
		 }
	      }
	   } while( done == 0);

	   if(accept)  line(x0,y0,x1,y1);

	   setcolor(15);
	   rectangle(xwmin,ywmin,xwmax,ywmax);

	   getch();

}
/*--------------------------------------------------------------------*/

 int  calcode (x,y,xwmin,ywmin,xwmax,ywmax)
 float  x,y,xwmin,ywmin,xwmax,ywmax;
 {
    int  code =0;

    if(y> ywmax)
	code |=TOP;
    else if( y<ywmin)
	code |= BOTTOM;
    else if(x > xwmax)
	code |= RIGHT;
    else if ( x< xwmin)
	code |= LEFT;

    return(code);
}

/*-------------------------------------------------*/

main()
{

	float x2,y2,x1,y1,xwmin,ywmin,xwmax,ywmax;
	int gd,gm;

	detectgraph(&gd,&gm);
	initgraph(&gd,&gm,"C:\\TC\\BGI");

	printf("\n\n\tEnter the co-ordinates of Line---------");
	printf("\n\n\tFirst_point co-ordinate is:");
	printf("\n\n\t\t\t	X1  Y1  :  ");
	scanf("%f %f",&x1,&y1);
	printf("\n\n\tSecond_point co-ordinate is:");
	printf("\n\n\t\t\t	X2  Y2  :  ");
	scanf("%f %f",&x2,&y2);


	printf("\n\tEnter the co_ordinates of window  :\n ");
	printf("\n\t\t	xwmin , ywmin  : ");
	scanf("%f %f",&xwmin,&ywmin);
	printf("\n\t\t	xwmax , ywmax  : ");
	scanf("%f %f",&xwmax,&ywmax);

	cleardevice();

	line(x1,y1,x2,y2);
	setcolor(6);
	rectangle(xwmin,ywmin,xwmax,ywmax);
	getch();
	cleardevice();

	lineclip(x1,y1,x2,y2,xwmin,ywmin,xwmax,ywmax);
	getch();
	closegraph();

}

