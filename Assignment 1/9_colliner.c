#include <stdio.h>

int main() {
    float x1, x2, x3, y1, y2, y3, a, b;

    printf("\nEnter the value of x1 and y1:\n");
    scanf("%f%f", &x1, &y1);

    printf("\nEnter the value of x2 and y2:\n");
    scanf("%f%f", &x2, &y2);

    printf("\nEnter the value of x3 and y3:\n");
    scanf("%f%f", &x3, &y3);

    a = (y2 - y1) / (x2 - x1);
    b = (y3 - y2) / (x3 - x2);

    if (a == b) {
        printf("\nGiven coordinates are collinear\n");
    } else {
        printf("\nNon-collinear\n");
    }

    return 0;
}
