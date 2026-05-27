#include <stdio.h>

void my_strcpy(char dest[], const char src[]){
  // it could be src[i] instead of *(src + i)
  for (size_t i = 0; 1; ++i){
    dest[i] = src[i];
    if (src[i] == '\0') {
      break;
    };
  };
}

int main(void){
  char v1[] = "abc";
  char v2[4];
  my_strcpy(v2, v1);

  return 0;
}