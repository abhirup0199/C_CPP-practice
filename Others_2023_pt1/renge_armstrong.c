#include <stdio.h>

int main() {
  int num, sum;

  for (int i = 1; i <= 1000; i++) {
    num = i;
    sum = 0;

    while (num > 0) {
      int rem = num % 10;
      sum += rem * rem * rem;
      num /= 10;
    }

    if (sum == i) {
      printf("%d is an Armstrong number\n", i);
    }
  }

  return 0;
}
