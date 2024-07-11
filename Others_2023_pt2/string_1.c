#include <stdio.h>

int compareStrings(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i];
        }
        i++;
    }
    return 0; // Both strings are equal
}

int main() {
    char string1[100], string2[100];

    printf("Enter first string: ");
    scanf("%s", string1);

    printf("Enter second string: ");
    scanf("%s", string2);

    int result = compareStrings(string1, string2);

    if (result == 0) {
        printf("Strings are equal.\n");
    } else if (result < 0) {
        printf("String 1 is lexicographically smaller than String 2.\n");
    } else {
        printf("String 1 is lexicographically greater than String 2.\n");
    }

    return 0;
}
