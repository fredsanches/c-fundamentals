#include <stddef.h>
#include <stdio.h>

size_t my_strncpy_safe(char dest[], size_t dest_capacity, const char src[]);

size_t my_strncpy_safe(char dest[], size_t dest_capacity, const char src[])
{
  (void)dest;
  (void)dest_capacity;
  (void)src;

  /*
   * TODO:
   * Copy as many non-null characters as safely fit.
   * Leave room for '\0' whenever dest_capacity is greater than 0.
   * Return the number of non-null characters actually copied.
   */
  return 0;
}

int main(void)
{
  char buffer[5];

  printf("Implement my_strncpy_safe(), then test truncation behavior.\n");
  printf("buffer capacity: %zu bytes\n", sizeof(buffer));

  return 0;
}
