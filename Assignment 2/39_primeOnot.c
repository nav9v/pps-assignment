#include <stdio.h>

int prime(int n) {
    int i;
    if (n < 2) {
        return 0;
    }
    for (i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    result = prime(n);

    if (result == 1) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}
