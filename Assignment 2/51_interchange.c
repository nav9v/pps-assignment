#include <stdio.h>

void exchange(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;
    
    // Call by value
    printf("Before exchange - x: %d, y: %d\n", x, y);
    exchange(&x, &y);
    printf("After exchange - x: %d, y: %d\n", x, y);
    
    // Call by reference
    int *ptr_x = &x, *ptr_y = &y;
    printf("Before exchange - x: %d, y: %d\n", *ptr_x, *ptr_y);
    exchange(ptr_x, ptr_y);
    printf("After exchange - x: %d, y: %d\n", *ptr_x, *ptr_y);

    return 0;
}
