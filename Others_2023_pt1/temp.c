#include <stdio.h>

int main() {
    float temp, fahrenheit, celsius;

    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9/5) + 32;
    printf("%.2f Celsius is equal to %.2f Fahrenheit.\n", celsius, fahrenheit);

    temp = (fahrenheit - 32) * 5/9;
    printf("%.2f Fahrenheit is equal to %.2f Celsius.\n", fahrenheit, temp);

    return 0;
}