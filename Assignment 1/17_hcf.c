#include <stdio.h>

int main() {
    int i, num1, num2, hcf;
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    for (i = 1; i <= num1 && i <= num2; i++) {
        
        if (num1 % i == 0 && num2 % i == 0) {
            hcf = i;
        }
    }

    printf("The HCF of %d and %d is %d", num1, num2, hcf);
    return 0;
}
