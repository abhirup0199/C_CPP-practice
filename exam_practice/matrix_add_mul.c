#include <stdio.h>

void matrixAddition(int n, int m) {
    int first[n][m], second[n][m], sum[n][m], i, j;

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &first[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &second[i][j]);
        }
    }

    printf("Sum of matrices:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            sum[i][j] = first[i][j] + second[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}

void matrixMultiplication(int n, int m, int p) {
    int first[n][m], second[m][p], multiply[n][p], i, j, k;

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &first[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++) {
            scanf("%d", &second[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < p; j++) {
            multiply[i][j] = 0;
            for (k = 0; k < m; k++) {
                multiply[i][j] += first[i][k] * second[k][j];
            }
        }
    }

    printf("Product of matrices:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < p; j++) {
            printf("%d ", multiply[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n, m, p;

    printf("Enter the number of rows and columns for matrices (n x m): ");
    scanf("%d %d", &n, &m);

    printf("Matrix Addition:\n");
    matrixAddition(n, m);

    printf("\nEnter the number of columns for the second matrix: ");
    scanf("%d", &p);

    if (m != p) {
        printf("Matrix multiplication is not possible.");
    } else {
        printf("\nMatrix Multiplication:\n");
        matrixMultiplication(n, m, p);
    }

    return 0;
}
