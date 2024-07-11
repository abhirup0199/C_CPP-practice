#include <stdio.h>

int main() {
  int num1, num2, temp;

  printf("Enter two numbers: ");
  scanf("%d %d", &num1, &num2);

  // Swap the two numbers using a temporary variable
  temp = num1;
  num1 = num2;
  num2 = temp;

  printf("After swapping, the first number is %d and the second number is %d\n", num1, num2);

  return 0;
}
