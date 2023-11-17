#include <stdio.h>
#include <string.h>

struct employee {
    int code;
    char name[50];
    float salary;
};

int main() {
    int n = 50;
    struct employee e[n];
    int hi = 0;

    for (int i = 0; i < n; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("Code: ");
        scanf("%d", &e[i].code);
        printf("Name: ");
        scanf("%s", e[i].name);
        printf("Salary: ");
        scanf("%f", &e[i].salary);

        if (e[i].salary > e[hi].salary) {
            hi = i;
        }
    }

    printf("Details of the employee with the highest salary:\n");
    printf("Code: %d\n", e[hi].code);
    printf("Name: %s\n", e[hi].name);
    printf("Salary: %.2f\n", e[hi].salary);

    return 0;
}
