#include <stdio.h>

int main() {
    int age, count = 0, i;

    for (i = 1; i <= 100; i++) {
        printf("Enter age of person %d: ", i);
        scanf("%d", &age);

        if (age >= 50 && age <= 60) {
            count++;
        }
    }

    printf("Number of persons in the age group of 50 to 60: %d", count);

    return 0;
}
