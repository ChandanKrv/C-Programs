void main()
{   long m,n;
    long fact(long );
    clrscr();
    printf("\n\n\t\tEnter The Number Of Terms=> ");
    scanf("%ld",&n);
    m=fact(n);
    printf("\n\n\t\tThe Result Of Factorial Is.....%ld",m);
    getch();
}                        /*  END OF MAIN FUNCTION  */


   long fact(long int n)
   {
   long s;
   if(n==0||n==1)
   return(1);
   else
   s=fact(n-1)*n;
   return(s);
}