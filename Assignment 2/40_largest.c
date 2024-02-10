#include <stdio.h>

int largest(int arr[], int size) {
    int i, max = arr[0];
    for (i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int arr[100], size, i, large;

    printf("Enter the size of the list: ");
    scanf("%d", &size);

    printf("Enter %d numbers:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    large = largest(arr, size);

    printf("The largest number in the list is: %d\n", large);

    return 0;
}
