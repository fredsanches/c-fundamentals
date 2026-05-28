#include <stddef.h>
#include <stdio.h>

int my_strcpy_safe(char[] , size_t, const char[]);

int my_strcpy_safe(char dest[], size_t dest_capacity, const char src[])
{
  if (dest_capacity == 0) {
    return 0;
  }
  for (size_t i = 0; i < dest_capacity; i++)
  {
    dest[i] = src[i];
    if (src[i] == '\0'){return 1;}
    if (i == (dest_capacity - 1)){
      dest[i] = '\0';
      // truncated string -> failure
      return 0;
    }
  }
  return 1;
}

int main(void)
{
  char buffer[8];

  printf("Implement my_strcpy_safe(), then test buffer capacity boundaries.\n");
  printf("buffer capacity: %zu bytes\n", sizeof(buffer));

  char v1[] = "abcdefghijk";
  my_strcpy_safe(buffer, sizeof(buffer), v1);
  printf("buffer == %s", buffer);

  return 0;
}

/*
 * Design Questions
 * Who owns the destination memory?
 * R: Main functions owns the destination memory.
 * 
 * How many bytes are available in `dest`?
 * R: Same bytes available in buffer (dest_capacity).
 * 
 * How many bytes are needed to copy src, including '\0'?
 * R: The buffer size must be grater than zero to copy at lesat '\0' char.
 * R: If buffer size grater than src size, the entire data will be copied..
 * 
 * Where is the last valid index in dest?
 * R: Is in dest[(dest_capacity - 1)] -> C is 0-indexed.
 * 
 * What should happen when src is an empty string?
 * R: Only '\0' char will be copied. So `dest` will become an empty string too.

*/