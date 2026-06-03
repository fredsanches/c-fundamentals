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

#include <stdio.h>

int my_strcat_safe(
  char dst[],
  size_t buffer_cap,
  const char src[]
){
  if (buffer_cap <= 0){
    return 0;
  }

  size_t i = 0;
  while (i <= (buffer_cap - 1) && dst[i]){
    i++;
  }

  // dst isn't null-terminated
  if (i == (buffer_cap - 1)){
    return 0;
  }

  // there's space to copy
  size_t idx = 0;
  while (src[idx] != '\0'){
    dst[i] = src[idx];
    i++;
    idx++;
  }
}