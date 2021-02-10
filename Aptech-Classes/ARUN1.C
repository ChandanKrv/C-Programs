#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	char *s;
	clrscr();
	printf("\n Enter the value of a ");
	scanf("%d",&a);
	printf("\n Enter the character of s ");
	scanf("%s",s);
       if(a>=20 && s[0]=='f')
	  printf("\n The gentle woman is insured ");
       else if(a>=25 && s[0]=='m')
	printf("\n The gentleman is insured ");
	else
	printf("\n The person is not insured ");
	getch();
}