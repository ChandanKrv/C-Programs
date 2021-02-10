/*.............PROGRAMME TO FIND THE 1'S COMPLEMENT OF A STRING............*/
void main()
{
char p[100],*q;
int m;
clrscr();
printf("\n\n\tEnter The String.....");
gets(p);
m=strlen(p);
printf("\n\tThe Length Of The String Is... %d",m);
q="~p";
printf("\n\tThe 1's Complement Of The String Is...%d",*q);
getch();
}
