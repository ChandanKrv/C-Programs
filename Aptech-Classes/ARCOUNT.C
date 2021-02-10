void main()
{
int i,j,count,n;
char *name,s;
clrscr();
printf("\n\t Enter The String:- ");
gets(name);
n=strlen(name);

	  for(j=0;j<n;j++)
	   {
	     count=0;
	     s=name[j];
	     if(s!=' ')
	       {
		  for(i=0;i<n;i++)
		    {
		      if(s==name[i])
		       {
			 count=count+1;
			 name[i]=' ';
		       }
		    }
		  printf("\n\t The Occurance Of %c Is %d",s,count);
	       }
	   }
  getch();
}