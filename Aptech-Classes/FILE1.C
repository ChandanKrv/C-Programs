//Program name :- day-10\file1.c
//Program in C to demonstrate the file handling technique.....
/* Program to create backup of a data file */
#include <stdio.h>
void main()
  {
    FILE *in, *out;
    char ch;
    clrscr();
    if ((in = fopen(".\\FILE1.DAT", "rt")) == NULL)
      {
	fprintf(stderr, "Cannot open input file.\n");
	//return 1;
      }
    if ((out = fopen(".\\FILE2.BAK", "wt")) == NULL)
      {
	fprintf(stderr, "Cannot open output file.\n");
	//return 1;
     }
    while (!feof(in))
      fputc(fgetc(in), out);
    printf("\n\n\t\tEnd of the program....");
    fclose(in);
    fclose(out);
    getch();
  }