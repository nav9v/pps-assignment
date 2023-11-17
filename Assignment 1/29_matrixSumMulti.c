#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j, k;

    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter the number of rows and columns of the second matrix: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Matrices cannot be multiplied!\n");
        return 0;
    }

    int mat1[r1][c1];
    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    int mat2[r2][c2];
    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    int product[r1][c2];
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            product[i][j] = 0;
            for (k = 0; k < c1; k++) {
                product[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    int sum[r1][c1];
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    printf("\nThe sum of the two matrices is:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    printf("\nThe product of the two matrices is:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}
