void main()
  {
    int a[10],i;
    void display(int *);			//prototype declaration
    void update(int []);			//prototype declaration
    clrscr();
    for(i=0;i<10;i++)
      a[i]=(i+1)*10;
    display(a);
    update(a);
    display(a);
    getch();
  }
void update(int x[])
  {
    int k;
    for(k=0;k<10;k++)
      x[k]=(k+1)*11;
  }
void display(int *b)
  {
    int j;
    printf("\n*********************************************");
    for(j=0;j<10;j++)
      printf("\nLocation no. = %d and content = %d...",j,*(b+j));
  }