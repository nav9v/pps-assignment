#include <stdio.h>

int main() {
    int arr[10];
    int size, i, index, element;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter %d elements: ", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the index to insert the element: ");
    scanf("%d", &index);
    printf("Enter the element to insert: ");
    scanf("%d", &element);

    for (i = size - 1; i >= index; i--) {
        arr[i + 1] = arr[i];
    }

    arr[index] = element;

    size++;

    printf("Array after insertion: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter the index of the element to delete: ");
    scanf("%d", &index);

    for (i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    size--;

    printf("Array after deletion: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
