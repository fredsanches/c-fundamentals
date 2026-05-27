#include <stdio.h>

int main(void){
  int table[4] = {10, 20, 30, 40};
  int *p = table;
  size_t count = sizeof(table) / sizeof(table[0]);
  for (size_t i=0; i < count; ++i){
    printf("i=%zu value1=%d value2=%d addr1=%p addr2=%p\n",
      i,
      table[i],
      *(table + i),
      (void *)&table[i],
      (void *)(table + i));
  }
  printf("sizeof(table) = %zu\n", sizeof(table));
  printf("sizeof(p)     = %zu\n", sizeof(p));
  printf("table         = %p\n", (void *)table);
  printf("&table[0]     = %p\n", (void *)&table[0]);
  printf("&table        = %p\n", (void *)&table);
  printf("p             = %p\n", (void *)p);
  printf("&p            = %p\n", (void *)&p);

  /*
  - arrays are contiguous objects,
  - arrays are not pointers,
  - arrays decay into pointers in many expressions,
  - pointer arithmetic is type-scaled,
  - indexing is pointer arithmetic + dereference,
  - pointer variables are separate objects in memory,
  - type controls arithmetic behavior,
  - sizeof(array) and sizeof(pointer) are fundamentally different.
  */

  return 0;
}