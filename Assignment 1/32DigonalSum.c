#include <stdio.h>

int main() {
    int n, i, j, sum = 0;

    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        sum += matrix[i][i];
    }

    printf("The sum of diagonal elements of the matrix is: %d\n", sum);

    return 0;
}
