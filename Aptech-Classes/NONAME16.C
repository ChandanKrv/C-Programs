#include<stdio.h>
#include<conio.h>
void main()
{
int d1,d2,m1,m2,y1,y2,d3,d4,m3,m4,y3,y4;
printf("enter date");
scanf("%d%d%d",&d2,&m2,&y2);
printf("\n enter today date");
scanf("%d%d%d",&d1,&m1,&y1);
if((d1>d2) && (m1>m2) &&(y1>y2))
{
   d4=d1-d2;
   m4=m1-m2;
   y4=y1-y2;
   printf("\n date %d \n month %d\n year %d ",d4,m4,y4);
}
else if((d1<d2) && (m1>m2) && (y1>y2))
{
	d3=d1+30;
	d4=d3-d2;
	m4=m1-m2;
	y4=y1-y2;
	printf("\n date %d \n month %d \n year %d",d4,m4,y4);
}
else if ((d1>d2)  && (m1<m2) && (y1>y2))
{
	 d4=d1-d2;
	 m3=m1+12;
	 m4=m3-m2;
	 y3=y1-1;
	 y4=y3-y2;
	 printf("\n date %d \n month %d \n year %d",d4,m4,y4);
}
else if ((d1<d2)  && (m1<m2) && (y1>y2))
{
	 d3=d1+30;
	 d4=d3-d2;
	 m3=m1+11;
	 m4=m3-m2;
	 y3=y1-1;
	 y4=y3-y2;
	 printf("\n date %d \n month %d \n year %d",d4,m4,y4);
}
else
{
	printf("\n thdttrsd");
}
getch();
}
