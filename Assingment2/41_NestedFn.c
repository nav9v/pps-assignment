#include <stdio.h>

void outer_function() {
    void inner_function() {
        printf("Hello from the inner function!\n");
    }
    printf("Hello from the outer function!\n");
    inner_function();
}

int main() {
    printf("Hello from the main function!\n");
    outer_function();
    return 0;
}
