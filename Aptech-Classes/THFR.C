#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int a,b,d;
	char ch;
	clrscr();
	printf("Enter the value of a:\n");
	scanf("%d",&a);
	printf("Enter the value of b:\n");
	scanf("%d",&b);
	printf("Enter the operater d:\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case '+':
			d=a+b;
			printf("The sum =%d",d);
			break;
		case'-':
			if(a>b)
			{
				d=a-b;
				printf("The sub =%d",d);
			}
			else
			{
				d=b-a;
				printf("The sub =%d",d);
			}
			break;
		case'*':
			d=a*b;
			printf("The mul =%d",d);
			break;
		case'/':
			if(a>b)
			{
				d=a/b;
				printf("The div =%d ",d);
			}
			else
			{
				d=b/a;
				printf("The div =%d",d);
			}
			break;
		default:
			printf("This is wrong");
			break;
	}
	getch();
}


