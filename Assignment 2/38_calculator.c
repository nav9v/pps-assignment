#include <stdio.h>
#include <math.h>

float calculator(char operator, float num1, float num2) {
    switch (operator) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            if (num2 == 0) {
                printf("Error: division by zero\n");
                
            } else {
                return num1 / num2;
            }
        default:
            printf("Error: invalid operator\n");
            return 0;
    }
}

int main() {
    char operator;
    float num1, num2, result;

    printf("Enter operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    result = calculator(operator, num1, num2);

    if (!isnan(result)) {
        printf("Result: %f\n", result);
    }

    return 0;
}
