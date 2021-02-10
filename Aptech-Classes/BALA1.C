#define COLMAX 15
#define ROWMAX 15
void main()
{
int row=1,col,y;
clrscr();
printf("          MULTIPLICATION TABLE       \n");
printf("-------------------------------------------------------------------\n");
do
{
col=1;
do
{
y=row*col;
printf("%4d",y);
col++;
}
while(col<=COLMAX);
printf("\n");
row++;
}
while(row<=ROWMAX);
printf("-------------------------------------------------------------------\n");
getch();
}