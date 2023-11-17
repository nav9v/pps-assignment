#include <stdio.h>
#include <math.h>

int main() {
    int x, n, result;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    result = pow(x, n);

    printf("%d raised to the power %d is %d\n", x, n, result);

    return 0;
}
