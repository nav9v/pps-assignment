#include <stdio.h>

int main() {
    int m, n, i, j, large;

    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &m, &n);

    int matrix[m][n];

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    large = matrix[0][0];
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (matrix[i][j] > large) {
                large = matrix[i][j];
            }
        }
    }

    printf("The largest element in the matrix is: %d\n", large);

    return 0;
}
