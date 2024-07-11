#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of integers (less than 100): ");
    scanf("%d", &n);

    if (n <= 0 || n >= 100) {
        printf("Please enter a valid number between 1 and 99.\n");
        return 1;
    }

    int arr[n];
    printf("Enter %d integers:\n", n);

    // Reading 'n' integers from the user and storing in the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    int product = 1;

    // Calculating the sum and product of elements in the array
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        product *= arr[i];
    }

    printf("Sum of the entered integers: %d\n", sum);
    printf("Product of the entered integers: %d\n", product);

    return 0;
}
