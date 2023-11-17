#include <stdio.h>
int main(){
    int num1 , num2, result;
    char op;
    printf("Enter the first and second number : ");
    scanf("%d %d", &num1, &num2 );
   
   printf("Enter the operator (+, -, /, %%, *): ");
    scanf(" %c", &op);

    switch(op) {
        
        case '+':
        result = num1 + num2;
        printf("The result is : %d", result);
        break;
        case '-':
        result = num1 - num2;
        printf("The result is : %d", result);
        break;
        case '/':
        result = num1 / num2;
        printf("The result is : %d", result);
        break;
        case '%':
        result = num1 % num2;
        printf("The result is : %d", result);
        break;
        case '*':
        result = num1 * num2;
        printf("The result is : %d", result);
        break;
        default:
        printf("Invalid Operation");
        break;
        }
        return 0;
}