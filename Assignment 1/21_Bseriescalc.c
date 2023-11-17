#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    float sum = 0, fact = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        fact *= i;
        sum = sum + 1.0/fact;
    }

    printf("The sum of the series is %f\n", sum);

    return 0;
}
