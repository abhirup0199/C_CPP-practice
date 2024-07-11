#include <stdio.h>

int main() {
  int num, rev, rem;

  printf("Enter a number: ");
  scanf("%d", &num);

  rev = 0;
  while (num != 0) {
    rem = num % 10;
    rev = rev * 10 + rem;
    num /= 10;
  }

  printf("The reversed number is %d.\n", rev);

  return 0;
}
