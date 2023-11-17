#include <stdio.h>

int main() {
    int num[10];
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (num[i] > num[j]) {
                int temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }

    printf("The numbers in ascending order are: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", num[i]);
    }
    printf("\n");

    return 0;
}
