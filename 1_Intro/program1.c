/**
 * program1.c
 * 
 * OBJECTIVE: Understanding different components of the program.
 * This is the comment/documentation section, used to mention about the file.
 * 
 */

// preprocessor section

#include <stdio.h>
#define TRUE 1

// end of preprocessor section

// function declaration section

/**
 * SayHello()
 * renders the basic hello message.
 * just to demostrate functions.
 */
void SayHello();

// end of function declaration section

// main() function > here enters the starting of program execution

int main(int argc, char const* argv[]) {

  // bunch of program statements
  printf("Hello, World.\n");
  printf("Enjoy Coding!\n");

  return TRUE; // return types apply to those function giving values in return
}

// end of main() function

// definition section for function other than main()

void SayHello() {
  printf("I am saying hello from SayHello() function.\n");
}

// end of definition section for functions other than main()
