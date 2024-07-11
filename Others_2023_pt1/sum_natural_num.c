#include <stdio.h>

int main() {
  int n, i, sum;

  printf("Enter a number: ");
  scanf("%d", &n);

  sum = 0;
  for (i = 1; i <= n; i++) {
    sum += i;
  }

  printf("The sum of the first %d natural numbers is %d.\n", n, sum);

  return 0;
}
