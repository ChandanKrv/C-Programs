void main()
  {
    int n,fib;
    int fibo(int);
    clrscr();
    printf("\n\n\t\tThis program finds the nth term of the fib. series...");
    printf("\n\n\t\tThe fibonacci series is 0, 1, 1, 2, 3, 5, 8, 13, 21....");
    printf("\n\n\t\tPlease enter the place number....");
    scanf("%d",&n);
    fib=fibo(n-1);
    printf("\n\n\t\tSo the required number is %d....",fib);
    getch();
  }

int fibo(int n)
  {
    int f=0;
    if (n==1 || n==0)
    return(n);
    f=fibo(n-1)+fibo(n-2);
   //printf("\n%d",f);
    return(f);
  }