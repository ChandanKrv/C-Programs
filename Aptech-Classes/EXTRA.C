void main()
{
int x,y,z;
clrscr();
printf("Value Of X = ");
scanf("%d",&x);
printf("Value Of Y = ");
scanf("%d",&y);
printf("Value Of Z = ");
scanf("%d",&z);
if(y<x && z<x && z<y)
printf("\nLargest X= %d , Second Y= %d , Third Z= %d",x,y,z);
if(y<x && z<x && y<z)
printf("\nLargest X= %d , Second Z= %d , Third Y= %d",x,z,y);
if(x<y && z<y && z<x)
printf("\nLargest Y= %d , Second X= %d , Third Z= %d",y,x,z);
if(x<y && z<y && x<z)
printf("\nLargest Y= %d , Second Z= %d , Third X= %d",y,z,x);
if(y<z && x<z && x<y)
printf("\nLargest Z= %d , Second Y= %d , Third X= %d",z,y,x);
if(y<z && x<z && y<x)
printf("\nLargest Z= %d , Second X= %d , Third Y= %d",z,x,y);
getch();
}