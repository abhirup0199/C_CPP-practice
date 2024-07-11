#include <stdio.h>

int cube(int num) {
  // Calculate the cube of the number
  int cube = num * num * num;
  return cube;
}

int squareRoot(int num) {
  // Initialize an integer variable to store the square root
  int sqrt = 0;

  // Iterate from 1 until the square of the current number exceeds the given number
  for (int i = 1; i * i <= num; i++) {
    sqrt = i;
  }

  // Return the integer square root
  return sqrt;
}

int main() {
  int number;

  // Prompt user to enter a number
  printf("Enter a number: ");
  scanf("%d", &number);

  // Calculate the cube of the number
  int cubeResult = cube(number);
  printf("Cube of %d is: %d\n", number, cubeResult);

  // Calculate the square root of the number
  int sqrtResult = squareRoot(number);
  printf("Square root of %d is: %d\n", number, sqrtResult);

  return 0;
}
