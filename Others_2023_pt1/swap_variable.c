#include <stdio.h>

int main() {
  int num1, num2;

  printf("Enter two numbers: ");
  scanf("%d %d", &num1, &num2);

  // Swap the two numbers without using a temporary variable
  num1 = num1 + num2;
  num2 = num1 - num2;
  num1 = num1 - num2;

  printf("After swapping, the first number is %d and the second number is %d\n", num1, num2);

  return 0;
}
