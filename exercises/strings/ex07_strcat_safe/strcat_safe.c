#include <stdio.h>

/*
 * Exercise 7: implement a safe string append function.
 *
 * Suggested function name:
 *   my_strcat_safe
 *
 * You must type:
 * - the needed #include directives
 * - the function declaration
 * - the function definition
 * - the parameter list
 * - the return type
 * - the local variables
 * - a main function with tests
 *
 * Your test program should print results for:
 * - enough spare capacity
 * - exactly enough capacity
 * - source too long
 * - empty source
 * - empty destination
 * - capacity 0
 */

/* Add your code below this line. */

#include <stdio.h>>

int my_strcat_safe(
  const char src[], 
  const char dst[], 
  char size_buffer
){
  if (size_buffer <= 0){
    return 0;
  }
  size_t i = 0;
  while (*(dst + i) != '\0'){

  }
}