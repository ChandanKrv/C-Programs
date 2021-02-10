void main()
{
int i;
char nm1[10],nm2[10];
clrscr();
printf("\n\t enter the 1st. string:- ");
gets(nm1);
printf("\n\t enter the 2nd. string:- ");
gets(nm2);
stswap(nm1,nm2);
getch();
}
	     stswap(char *nm3,char *nm4)
	     {
	     char *temp;
	     temp=nm3;
	     nm3=nm4;
	     nm4=temp;
	     printf("\n\t%s",nm3);
	     printf("\n\t%s",nm4);
	     }