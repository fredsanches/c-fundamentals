#include <stdio.h>

int main(void){
  int table[4] = {10, 20, 30, 40};
  int *p = table;
  printf("table     = %p\n", (void *)table);
  printf("&table[0] = %p\n", (void *)&table[0]);
  printf("&table    = %p\n", (void *)&table);
  printf("p         = %p\n", (void *)p);
  printf("&p        = %p\n", (void *)&p);
  printf("*p        = %d\n", *p);
  printf("p[0]      = %d\n", p[0]);

  /*
  p[i] is define by the language as *(p + i).
  It's not a compiler optimizatioin. It's the actual meaning.
  This is a also valid in C: i[p] 
  because i[p] == *(i + p) == *(p + i)
  */

  /*
  table     -> array object: int[4]
  &table[0] -> pointer to first element: int *
  &table    -> pointer to whole array: int (*)[4]
  p         -> pointer variable holding first element address: int *
  &p        -> address of the pointer variable itself: int **

  One subtle point: table is not itself a pointer, even though in many 
  expressions it decays to one. That decay is why table and &table[0] 
  often print the same numeric address. But their types and arithmetic 
  behavior are different.
  */

  return 0;
}