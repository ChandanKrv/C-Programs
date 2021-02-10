void main()
{
char *p="ANJAN";
clrscr();
(*p)++; //same as "++*P"//
printf("%s\n",p);
*p++;//same as "P++"//
printf("%s\n",p);
getch();
}