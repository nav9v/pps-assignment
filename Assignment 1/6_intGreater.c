#include <stdio.h>

int main() {
    int i, sum = 0;

    for (i = 501; i < 1000; i++) {
        if (i % 6 == 0) {
            sum = sum + i ;
        }
    }

    printf("the sum: %d\n", sum);

    return 0;
}
