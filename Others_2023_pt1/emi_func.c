#include <stdio.h>

float calculate_simple_interest(float principal, float rate, int years) {
  return (principal * rate * years) / 100;
}

int main() {
  float principal, rate, interest;
  int years;

  printf("Enter principal amount: ");
  scanf("%f", &principal);

  printf("Enter rate of interest: ");
  scanf("%f", &rate);

  printf("Enter number of years: ");
  scanf("%d", &years);

  interest = calculate_simple_interest(principal, rate, years);

  printf("Simple interest: %.2f\n", interest);

  return 0;
}
