#include <stdio.h>

int main()
 {
    int n;

    // Prompt the user to enter the number of lines
    printf("Enter the number of lines: ");
    scanf("%d", &n);

    // Initialize the starting value
    int current = 1;

    // Loop to print the pattern
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            current += 1;
            printf("%d ", current);
        }
        current *= 2;
        printf("\n");
    }

    return 0;

}