#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2, realPart, imaginaryPart;

    printf("Enter value for a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("The roots of the equation are = %.2f %.2f \n",root1,root2);
    } 
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("The roots are real and equal.\n");
        printf("The roots of the equation are = %.2.2f %f \n",root1,root2);
    } 
    else {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("The roots are imaginary hence we cannnot compute them\n");
    }

    return 0;
}
