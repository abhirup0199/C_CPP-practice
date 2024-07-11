#include <stdio.h>

void reverseString(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    int start = 0;
    int end = length - 1;

    while (start < end) {
        // Swap characters at start and end indices
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Move towards the center of the string
        start++;
        end--;
    }
}

int main() {
    char inputString[100];

    printf("Enter a string: ");
    scanf("%s", inputString);

    printf("Original String: %s\n", inputString);

    reverseString(inputString);

    printf("Reversed String: %s\n", inputString);

    return 0;
}
