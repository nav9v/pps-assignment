#include <stdio.h>
#include <string.h>

struct country {
    char name[50];
    char capital[50];
    float per_capita_income;
};

int main() {
    int n = 5;
    struct country c[n];
    for (int i = 0; i < n; i++) {
        printf("Enter details for country %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", c[i].name);
        printf("Capital: ");
        scanf("%s", c[i].capital);
        printf("Per capita income: ");
        scanf("%f", &c[i].per_capita_income);
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (c[i].per_capita_income < c[j].per_capita_income) {
                struct country temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
    printf("Countries in decreasing order of per capita income:\n");
    for (int i = 0; i < n; i++) {
        printf("%s (Capital: %s) - Per capita income: %.2f\n", c[i].name, c[i].capital, c[i].per_capita_income);
    }

    return 0;
}

