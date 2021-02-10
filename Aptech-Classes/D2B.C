void main()
{
int n,b,i;
void binary(int);
clrscr();
printf("\n\t enter the no.:- ");
scanf("%d",&n);
binary(n);
}
	void binary(int n)
			{
			int k,i=0,j;
			int s[16];
			while(n>0)
			{
			k=n%2;
			i++;
			s[i]=k;
			n/=2;
			}
			while(i>0)
			{
			printf("%d",s[i]);
			i--;
			}
			getch();
			}