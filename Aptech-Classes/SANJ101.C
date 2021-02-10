 void main()
 {
  char *a;
  int i,j,k,n;
  clrscr();
  printf("\n\n\t\tEnter The String.....");
  gets(a);
  n=strlen(a);
  printf("\n\n\n\n\t\t\t\t");
  for(i=0;i<n;i++)
  {
     if(i==0)
	 {
	    printf("%c. ",a[i]);
	 }
     else
      {
	while(a[i]!='\x0')
	 {
	   if(a[i]==' ')
	    {
	      i++;
	      printf("%c. ",a[i]);
	    }
       i++;
    }
    }
   }
  getch();
  }