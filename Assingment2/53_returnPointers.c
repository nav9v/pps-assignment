#include <stdio.h>

int* max(int *x, int *y) {
    if (*x > *y) {
        return x;
    } else {
        return y;
    }
}

int main() {
    int a = 10, b = 20;
    int *result = max(&a, &b);
    printf("The maximum value is %d\n", *result);
    return 0;
}
