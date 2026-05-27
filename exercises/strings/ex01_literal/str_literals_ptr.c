#include <stdio.h>

int main(void){
  char *word = "cat";
  printf("address: %p\n", (void *)word);
  printf("values: %c\n", *word);
  printf("values: %c\n", *(word+1));
  printf("values: %c\n", *(word+2));
  return 0;
}

/*
The question is why not using this syntax?
    char *word = &"cat";

"cat" is a string, which type is char[4]. It means that it 
contains ['c']['a']['t']['\0'].

char *word = "cat";
It works because the array literal DECAYS to a pointer to
its firts element. So the resulting type is: * char
  word
    |
    v
  ['c']['a']['t']['\0']

char *word = &"cat";
As "cat" is type char[4], &"cat" means the address of the
ENTIRE OBJECT.

Doing &"cat", the type becomes char (*)[4] -> pointer to array of 4 chars.
It differs A LOT from * char
*/