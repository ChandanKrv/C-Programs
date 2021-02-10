/* s=(1/1!)+(1/2!)+(1/3!)+...+(1/n!)*/
void main()
{
//int fact(int);
int n,i;
float s=0,p;
clrscr();
printf("\n\n\t\t enter the upper limit :- ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
s=s+(1/(float)fact(i));
}
printf("\n\n\t\t result :- %f",s);
getch();
}
fact(int n)
	  {
	  int j,k=1;
	  for(j=1;j<=n;j++)
			  {
			  k=k*j;
			  }
	  return(k);
	  }