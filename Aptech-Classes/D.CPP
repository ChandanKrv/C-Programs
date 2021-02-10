#include<stdio.h>
#include<conio.h>
void main()
{
	int n,c,d,i,j;
	clrscr();
	printf("enter any number =");
	scanf("%d",&n);
	for(i=1;d=0;i<=n;i++)
	{
		c=n%i;
		if(c==0)
		{
			for(j=1;j<=i;j++)
			{
				c=i%j;
				if(c==0)
				d++;
			}
			if(d==2||d==1)
			{
				printf("%d",i);
			}
		}
		d==0;

	}
	getch();


}