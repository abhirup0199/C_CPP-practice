#include <stdio.h>

int main() {
  int num, rev=0, rem, ex;

  printf("Enter a number: ");
  scanf("%d", &num);

  ex = num;
  while (num != 0) {
    rem = num % 10;
    rev = rev * 10 + rem;
    num /= 10;
  }

  if (ex == rev) {
    printf("%d is a palindrome number.\n", ex);
  } else {
    printf("%d is not a palindrome number.\n", ex);
  }

  return 0;
}