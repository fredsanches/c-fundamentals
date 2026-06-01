#include <stdio.h>

/*
 * Exercise 6: implement a string comparison function.
 *
 * Suggested function name:
 *   my_strcmp
 *
 * You must type:
 * - the function declaration
 * - the function definition
 * - the parameter list
 * - the return type
 * - the local variables
 * - a main function with tests
 *
 * Your test program should print results for:
 * - equal strings
 * - prefix strings
 * - strings that differ at the first character
 * - strings that differ in the middle
 */

/* Add your code below this line. */

int my_strcmp(char const[], char const[]);

int my_strcmp(char const left[], char const right[]){
  size_t i = 0;
  if (*(left) != *(right)){
    return 0;
  };
  while (*(left + i) != '\0' && *(left + i) == *(right + i)){
    i ++;
  };

  /*
  return 0        -> equal lenght
  return negative -> left compares before right
  return positive -> right compares before left
  */
  return (unsigned char)left[i] - (unsigned char)right[i];
}

int main(void){
  char v1[] = "abcd";
  char v2[] = "efgh";
  int rst = my_strcmp(v1, v2);

  if (rst == 0){
    printf("Strings are equal with the same lenght\n"
          "or they're completly different.\n");
  }
  else if (rst < 0){
    printf("Left string compares before right string\n. "
           "They're not equal\n");
  } else {
    printf("Right string compares before left string\n. "
           "They're not equal\n");
  };
  return 0;
}
