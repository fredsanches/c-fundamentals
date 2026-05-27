#include <stdio.h>

/*
The loop should examine a string like "embedded"
look for a condition to stop -> '\0' the null terminator
and return the array size based on the total numbers of
array element, without null terminator.
*/

size_t my_strlen(const char str[]){
  size_t count = 0;
  for (size_t i=0; *(str+i); ++i){
    count += 1;
  }
  return count;
}

int main(void){

  char word[] = "embedded";
  printf("The string %s has %zu characters\n", 
    word, 
    my_strlen(word));

  printf("Checking the address of each element...\n");
  for(size_t i=0; i < my_strlen(word); ++i){
    printf("element word[%zu]: \tvalue: %c \taddress: %p\n", 
      i, word[i], word + i);
  }
  return 0;
}