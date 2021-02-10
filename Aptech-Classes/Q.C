		/*IMPLEMENTING ALL THE QUEUE OPERATIONS*/
int queue[10],re=-1,fr=0,max=9;
void main()
{
int cho,i,j,k,l;
clrscr();
//void push(void);
//void sostk();
 while(cho!=5)
  {
   clrscr();
   printf("\n\t...............MAIN MENU.....................");
   printf("\n\t1>>  QUEUE INSERT.....................");
   printf("\n\t2>>  QUEUE DELETE......................");
   printf("\n\t3>>  QUEUE DISPLAY..................");
   printf("\n\t4>>  EXIT...........................");
   printf("\n\n\t\tEnter The Choice.....");
   scanf("%d",&cho);
   if(cho<1||cho>4)
    {
      printf("\n\t\tWrong Choice!!!");
      getch();
      exit();
    }
      switch(cho)
	{
      case 1:insert();
	   break;
      case 2:i=del();
	   printf("\n\n\t\tThe Popped Element Is....%d",i);
	   getch();
	   break;
      case 3:soq();
	   break;
      case 4:printf("\n\n\t\tOK BYE BYE....");
	   getch();
	   exit();

  }
}
}





insert()
{
int x;
if((re==max&&fr==1))
{
printf("\n\n\t\tQUEUE OVERFLOW!!!");
getch();
exit();
}
printf("\n\n\t\tEnter The Element....");
scanf("%d",&x);
if(re==max)
re=0;
else if(fr==-1)
{fr=0;re=0;}
else
re++;
queue[re]=x;
printf("\n\n\t\tThe Element At Position %d Is %d....",re+1,x);
getch();
}





int del()
{
int x;
if(fr==re+1)
{
printf("\n\n\t\tQUEUE UNDERFLOW!!!");
getch();
exit();
}
x=queue[fr];
if(fr==max)
fr=1;
else
fr++;
return(x);
}

soq()
{
int i;
if(re==-1||fr==re+1)
{
printf("\n\t\tThere Are No Items In The Queue....");
getch();
exit();
}
for(i=fr;i<=re;i++)
printf("\n\t\tThe Element At Position %d Is %d...",i+1,queue[i]);
getch();
}