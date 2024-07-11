#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char sentence[1000];
    int vowels[5] = {0}; // Array to store frequency of each vowel
    int consonants = 0;
    
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Iterate through each character in the sentence
    for (int i = 0; sentence[i] != '\0'; ++i) {
        char ch = tolower(sentence[i]); // Convert to lowercase for case-insensitivity

        if (ch >= 'a' && ch <= 'z') {
            // Check if the character is a vowel
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                switch (ch) {
                    case 'a':
                        vowels[0]++;
                        break;
                    case 'e':
                        vowels[1]++;
                        break;
                    case 'i':
                        vowels[2]++;
                        break;
                    case 'o':
                        vowels[3]++;
                        break;
                    case 'u':
                        vowels[4]++;
                        break;
                }
            } else {
                // If the character is a consonant
                consonants++;
            }
        }
    }

    // Display the frequency of each vowel
    printf("\nFrequency of vowels:\n");
    printf("A: %d\n", vowels[0]);
    printf("E: %d\n", vowels[1]);
    printf("I: %d\n", vowels[2]);
    printf("O: %d\n", vowels[3]);
    printf("U: %d\n", vowels[4]);

    // Display the total count of consonants
    printf("\nTotal count of consonants: %d\n", consonants);

    return 0;
}
