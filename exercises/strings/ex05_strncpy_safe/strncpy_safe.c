#include <stddef.h>
#include <stdio.h>

size_t my_strncpy_safe(char[], size_t dest_capacity, const char src[]);

size_t my_strncpy_safe(char dest[], size_t dest_capacity, const char src[])
{
  if (dest_capacity == 0) {
    return 0;
  }
  size_t count = 0;
  for (size_t i = 0; i < dest_capacity; i++)
  {
    if (src[i] == '\0' || i == (dest_capacity - 1)){
      dest[i] = '\0';
      break;
    }
    dest[i] = src[i];
    ++count;
  }
  // size without null terminator
  return count;
}

int main(void)
{
  char buffer[1];

  printf("Implement my_strncpy_safe(), then test truncation behavior.\n");
  printf("buffer capacity: %zu bytes\n", sizeof(buffer));

  char v1[] = "abcd";
  size_t result = 0;
  result = my_strncpy_safe(buffer, sizeof(buffer), v1);
  printf("Number of non null chars: %zu\n", result);

  return 0;
}
