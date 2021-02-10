//Program name :- day-10\file3.c

//Program in C to demonstrate the file handling technique.....

/* Program to create data file taking data from keyboard and to display it */

#include <stdio.h>
#include <conio.h>

int main(void)
  {
    int a,i,n;
    char c[15];
    FILE *in, *out;

    clrscr();

    printf("\n\n\t\tPlease enter the number of records....");
    scanf("%d",&n);

    if ((out = fopen(".\\TEST.BAK", "wt")) == NULL)
      {
	fprintf(stderr, "Cannot open output file.\n");
	return 1;
      }

    for(i=1;i<=n;i++)
      {
	printf("\n\t\tPlease enter the name...");
	scanf("%s",c);

	printf("\n\t\tPlease enter the age...");
	scanf("%d",&a);

	printf("\n\t\tEntered name = %s and entered age = %d....",c,a);

	fprintf(out,"%s %d ",c,a);
      }

    fclose(out);

    if ((in = fopen(".\\TEST.BAK", "rt")) == NULL)
      {
	fprintf(stderr, "Cannot open input file.\n");
	return 1;
      }

    printf("\n\n\t\tThe content of the file is....");

    while(!feof(in))
      {
	fscanf(in,"%s %d ",c,&a);
	printf("\n\t\tEntered name = %s and age = %d....",c,a);
      }

    fclose(in);

    getch();
  }

