#include <stdio.h>
#include <string.h>

int main() {
    char name[20], rev[20];
    int i, len = 0;

    printf("Enter a string: ");
    fgets(name, 20, stdin);

    len = strlen(name);

    for (i = 0; i < len; i++) {
        rev[len - 1 - i] = name[i];
    }
    rev[len] = '\0';

    printf("Reverse string: %s\n", rev);

    return 0;
}
