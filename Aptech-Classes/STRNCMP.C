void main()
{
int i,j,n;
char *n1;
void strcomp(char *);
clrscr();
printf("\n\t enter the string:- ");
gets(n1);
strcomp(n1);
getch();
}
	void strcomp(char *n3)
	  {
	  int i=0,j,n,f=0;
	  char *n2;
	  n=strlen(n3);
	  j=n-1;
	  while(j>=0)
	  {
	  *(n2+i)=*(n3+j);
	  i++;
	  j--;
	  }
	  for(i=0;i<n;i++)
	  {
	  if(*(n3+i)!=*(n2+i))
	  {
	  f=1;
	  break;
	  }
	  }
	  if(f==0)
	  printf("\n\tpalindrom");
	  else
	  printf("\n\tnot palindrom");
	  }