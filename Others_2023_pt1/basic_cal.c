#include <stdio.h>

int main() {
    float num1, num2, result;
    char operator;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter operator (+,-,*,/): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%f", &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2f\n", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result: %.2f\n", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result: %.2f\n", result);
            break;

        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2f\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        default:
            printf("Error: Invalid operator.\n");
            break;
    }

    return 0;
}
