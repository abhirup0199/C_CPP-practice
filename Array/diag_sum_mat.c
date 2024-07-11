#include <stdio.h>
#include <stdlib.h>

int main() {
    int m;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &m);

    if (m <= 0) {
        printf("Invalid size for matrix.\n");
        return 1;
    }

    // Dynamically allocating memory for the square matrix
    int **matrix = (int **)malloc(m * sizeof(int *));
    for (int i = 0; i < m; i++) {
        matrix[i] = (int *)malloc(m * sizeof(int));
    }

    // Taking input for the matrix
    printf("Enter elements of the square matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculating the sums of left and right diagonals
    int leftDiagonalSum = 0;
    int rightDiagonalSum = 0;
    for (int i = 0; i < m; i++) {
        leftDiagonalSum += matrix[i][i];
        rightDiagonalSum += matrix[i][m - i - 1];
    }

    // Displaying the sums
    printf("Sum of left diagonal elements: %d\n", leftDiagonalSum);
    printf("Sum of right diagonal elements: %d\n", rightDiagonalSum);

    // Freeing dynamically allocated memory
    for (int i = 0; i < m; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}
