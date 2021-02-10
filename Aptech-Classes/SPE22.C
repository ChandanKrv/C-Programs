/*void myalloc(char *x,int n)
{
x=(char *)malloc(n*sizeof(char));
memset(x,"*",n*sizeof(char));  //sets 1st "n" bytes of the array "x" to char "c"
}
void main()
{
char *g="String";
clrscr();
myalloc(g,20);
strcpy(g,"Oldstring");
printf("The String %s ",g);
getch();
}*/
char *gxxx()
{
static char xxx[10];
return xxx;
}
void main()
{
char *g="Anjan";
clrscr();
strcpy(gxxx(),g);
g=gxxx();
printf("\n%s\t%s",g,gxxx());
strcpy(g,"QUEEN");
printf("\nThe String Is %s",gxxx());
getch();
}