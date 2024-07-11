#include <stdio.h>

int main() {
  int int_size = sizeof(int);
  float float_size = sizeof(float);
  double double_size = sizeof(double);
  char char_size = sizeof(char);

  printf("The size of int is %lu bytes\n", int_size);
  printf("The size of float is %lu bytes\n", float_size);
  printf("The size of double is %lu bytes\n", double_size);
  printf("The size of char is %lu bytes\n", char_size);

  return 0;
}
