void main()
{
int i,j,car;
static int freq[5][5]={{0},{0},{0},{0},{0}};
char city;
clrscr();
printf("for each person,enter the city code \n");
printf("followed by the car code\n");
printf("enter the letter 'x'to indicate end.\n");
for(i=0;i<100;i++)
{
scanf("%c",&city);
if(city=='x')
break;
scanf("%d",&car);
switch(city)
{
case 'b': freq[1][car]++;
break;
case 'c':freq[2][car]++;
break;
case 'd':freq[3][car]++;
break;
case 'm':freq[4][car]++;
break;
}
}
printf("\n\n");
printf("                         POPULARITY TABLE        \n\n");
printf("---------------------------------------------------------------------------\n");
printf("city    ambassador    fiat    dolphin    maruti\n");
printf("---------------------------------------------------------------------------\n");
for(i=1;i<=4;i++)
{
switch(i)
{
case 1:printf("bombay    ");
       break;
case 2:printf("calcutta  ");
       break;
case 3:printf("delhi     ");
       break;
case 4:printf("madras    ");
       break;
}
for(j=1;j<=4;j++)
printf("%7d",freq[i][j]);
printf("\n");
}
printf("---------------------------------------------------------------------------\n");
getch();
}