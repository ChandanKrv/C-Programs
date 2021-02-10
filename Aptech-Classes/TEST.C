//Program name :- day-1\test.c

//Program demo in C-language....

#include <stdio.h>		//header file declaration
#include <conio.h>              //header file declaration

void main(void)                 //starting of the function body main()
  {
    int a,b,c;			//declaration of variables

    clrscr();			//clearing the screen

    printf("\n\n\t\tPlease enter the first number....");  //user prompt
    scanf("%d",&a);                                       //accept first no.

    printf("\n\n\t\tPlease enter the second number...."); //user prompt
    scanf("%d",&b);                                       //accept second no.

    if (b==0)                                             //condition check
      {
	printf("\n\n\t\tDivision by ZERO is illegal....");//display message
      }
    else
      {
	c=a/b;                                               //division
	printf("\n\n\t\tThe result of division is %d....",c);//display result
      }

    c=a+b;						  //addition

    printf("\n\n\t\tThe result of addition is %d....",c); //display result

    getch();					     //wait for any key press
  }

//Comment line in a C-program can be inserted in two ways
//  1> line comment using two // at the beginning of the line.

/*  2> Block comment using /* and */

/*

The editor in which we are typing is known as IDE (Intelligent Development
Environment). Which has several hot keys to activate different options. e.g.

	      alt+0 => list all windows
	    ctrl+F1 => topic search
	    ctrl+F2 => program reset
	     alt+F3 => window close
		 F4 => goto cursor
	     alt+F4 => inspect
	    ctrl+F4 => evaluate and modify
		 F5 => zoom
	     alt+F5 => user screen
		 F7 => trace into
	    ctrl+F7 => add watch
		 F8 => step over
	    ctrl+F9 => run

Any line begining with the # symbol is known as compiler directive or
compiler preprocessor. That means that the line is providing an instruction
towards the compiler.

The default path for the header files is c:\tc\include and that for the
library files is c:\tc\lib. The path is to be set through the option menu
		Option -> Directories

	C:\tc\bin -> contains the executable files e.g. TC.EXE
	c:\tc\include -> contains the header files.
	c:\tc\lib -> contains the library files.
	c:\tc\bgi -> contains the Borland-Graphics-Interface files.
	c:\tc\examples -> contains examples files.
	c:\tc\classlib -> contains class library files.
	c:\tc\tour -> contains a TCTOUR.EXE file for the demonstration.


Translator is a program which will take a HLL written program as input
and produces a MLL version of the program as output.

Translator can be divided in two categories :-
1> interpreter - It will translate each and every line of the program
		 prior its execution.
2> compiler    - It will translate the program and produces the
		 corresponding machine code of it in a separate executable
		 file. And later the compiled-program will have its execution.

A program should be divided into several modules depending upon the
different purposes of the modules. Each module should have a specific purpose.
In C these modules are called as functions.
e.g. a factorial calculation program should have following functions :

	main()		The main function the first executable function
	input()		To take a number from the user
	fact_cal()      To calculate the factorial of the given number
	display()	To display the current result

Header files contain the indices of different functions defined in the
corresponding library files.

The library files are on the other hand are responsible to contain the
function bodies of different functions.


*/






