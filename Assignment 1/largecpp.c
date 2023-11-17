#include <stdio.h>

int main() {
    int num[5], large = 0, i;

    for (i = 0; i < 5; i++) {
        printf("\nEnter the number: ");
        scanf("%d", &num[i]);
    }

    for (i = 0; i < 5; i++) {
        if (num[i] > large) {
            large = num[i];
        }
    }

    printf("\nThe largest number is: %d", large);

    return 0;
}
