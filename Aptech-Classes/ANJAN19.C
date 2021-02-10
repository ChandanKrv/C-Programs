void main()
{
char x1[50],x2[10],temp[30];
int y1,y2;
clrscr();
printf("\n\n\tEnter The String....\n\t");
gets(x1);
printf("\n\n\tEnter The Sub String....\n\t");
gets(x2);
y1=strlen(x1);
y2=strlen(x2);
printf("\n\n\tThe Length Of The String Is=%d",y1);
printf("\n\n\tThe Length Of The Sub-String Is=%d",y2);
getch();
clrscr();
}