#include <stdio.h>

int main() {
    int num, binary[32], i;

    printf("Enter a positive integer: ");
    scanf("%d", &num);
    for(i = 0; num > 0; i++) {
        binary[i] = num % 2;
        num /= 2;
    }

    printf("Binary equivalent: ");
    for (i = i - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");

    return 0;
}
