#include <stdio.h>

int main() {
  char operator;
  float num1, num2, result;

  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &operator);

  printf("Enter two numbers: ");
  scanf("%f %f", &num1, &num2);

  switch (operator) {
    case '+':
      result = num1 + num2;
      break;
    case '-':
      result = num1 - num2;
      break;
    case '*':
      result = num1 * num2;
      break;
    case '/':
      result = num1 / num2;
      break;
    default:
      printf("Invalid operator.\n");
      break;
  }

  printf("The result is: %f\n", result);

  return 0;
}
