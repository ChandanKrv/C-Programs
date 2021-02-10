 void main()
 {
  char a[100];
  int i,j,k,n;
  clrscr();
  printf("\n\n\t\tEnter The String.....");
  gets(a);
  n=strlen(a);
  printf("\n\n\t\tThe Length Of The String Is.....%d",n);
  printf("\n\n\n\n\t\t\t\t");
  for(i=0;i<n;i++)
  {
     if(i==0)
	 {
	    printf("%c. ",a[i]);
	 }
     else
      {
	while(a[i]!=' ')
	 {
	    i++;
	 }
      if(a[i]==' ')
       {
	 i++;
	 for(j=i;j<=n;j++)
	   {
	      printf("%c",a[j]);
	   }
       }
    }
   }
  getch();
}