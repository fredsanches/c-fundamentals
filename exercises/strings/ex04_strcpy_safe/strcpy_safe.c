#include <stddef.h>
#include <stdio.h>

int my_strcpy_safe(char[] , size_t, const char[]);

int my_strcpy_safe(char dest[], size_t dest_capacity, const char src[])
{
  

  /*
   * TODO:
   * 1. Decide what to do when dest_capacity is 0.
   * 2. Copy at most the bytes that fit in dest.
   * 3. Always account for the final '\0'.
   * 4. Return 1 only when the whole source string was copied.
   */
  return 0;
}

int main(void)
{
  char buffer[8];

  printf("Implement my_strcpy_safe(), then test buffer capacity boundaries.\n");
  printf("buffer capacity: %zu bytes\n", sizeof(buffer));

  return 0;
}
