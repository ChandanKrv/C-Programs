/*************PROGRAM TO FIND THE DIFFERENCE OF TWO DATES*******************/
void main()
{
int d1,d2,m1,m2,x1,x2,m,x11,y4,x12;
long y1,y2,y=0,xx,xxx,day,yx,y3;
clrscr();
printf("\n\n\tEnter The Starting Day,Starting Month & Starting Year...\n");
scanf("\n%d\n%d\n%ld",&d1,&m1,&y1);
printf("\n\n\n\tEnter The Closing Day,Closing Month & Starting Year....\n");
scanf("\n%d\n%d\n%ld",&d2,&m2,&y2);
clrscr();
printf("\n\n\t\tThe Starting Date Is=%d/%d/%ld",d1,m1,y1);
printf("\n\n\t\tThe Closing  Date Is=%d/%d/%ld",d2,m2,y2);
getch();

if((((y1%100)!=0)&&(y1%4==0))||(y1%400)==0)
x1=0;
if((((y2%100)!=0)&&(y2%4==0))||(y2%400)==0)
x2=0;
m=m1;
yx=(y2-y1);
/**********************SOME RESTRICTIONS************************************/
if((d1>31||d2>31)||(m1>12||m2>12)||((d1==31||d1==30||d2==31||d2==30)
&&(m1==2||m2==2))||((d1==31||d2==31)&&(m1==4||m2==4||m1==6||m2==6
||m1==9||m2==9||m1==11||m2==11)))
exit(1);
/***********************SAME YEAR*******************************************/
if(yx==0)
{
while(m<m2)
{
if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
day=31;
else
if(m==4||m==6||m==9||m==11)
day=30;
else
if(m==2)
{
if(x1==0)
day=29;
else
day=28;
}
y+=day;
m++;
}
xx=(y+d2);
xxx=(xx-d1);
clrscr();
printf("\n\n\n\n\n\t\tThe Difference Between Two Dates Is......\n");
printf("\n\n\t\t\t\t%ld",xxx);
printf("\n\n\n\n\n\t\tOK TATA BAI BAI MEET YOU NEXT TIME.....");
getch();
}
/*************************DIFFERENT YEAR***********************************/
y3=(y1+1);
y4=1;
if(yx>0)
{
while(y3<y2)
{
if( (((y3%100)!=0)&&(y3%4==0))||(y3%400)==0)
day=366;
else
day=365;
y+=day;
y3++;
}
while(m<=12)
{
if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
day=31;
if(m==4||m==6||m==9||m==11)
day=30;
if(m==2)
{
if(x1==0)
day=29;
else
day=28;
}
y+=day;
m++;
}
y-=d1;
while(y4<m2)
{
if(y4==1||y4==3||y4==5||y4==7||y4==8||y4==10||y4==12)
day=31;
if(y4==4||y4==6||y4==9||y4==11)
day=30;
if(y4==2)
{
if(x2==0)
day=29;
else
day=28;
}
y+=day;
y4++;
}
y+=d2;
clrscr();
printf("\n\n\n\n\n\t\tTHE DIFFERENCE BETWEEN TWO DATES IS....");
printf("\n\n\t\t\t\t%ld",y);
getch();
printf("\n\n\n\n\n\t\tOK TATA BYE BYE SEE YOU NEXT TIME......");
getch();
}
}