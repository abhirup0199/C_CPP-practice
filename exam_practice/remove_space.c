#include <stdio.h>
#include <string.h>

int main() 
{
    char input[100], output[100];
    int i, j=0;
    printf("Enter a string with spaces: ");
    fgets(input, sizeof(input), stdin);

    for (i = 0; i < strlen(input); i++) 
    {
        if (input[i] != ' ') 
        {
            output[j++] = input[i];
        }
    }

    output[j] = '\0'; 
    printf("String without spaces: %s\n", output);
    return 0;
}