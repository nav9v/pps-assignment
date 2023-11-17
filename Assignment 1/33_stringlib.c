#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Hello";
    char str2[20] = "world";
    char str3[20];
    printf("Example taken : Hello world");

    printf("Length of str1: %d\n", strlen(str1));
    printf("Reverse of str1: %s\n", strrev(str1));

    strcpy(str3, str1);
    strcat(str3, str2);
    printf("Concatenation of str1 and str2: %s\n", str3);

    if (strcmp(str1, str2) == 0) {
        printf("str1 and str2 are equal\n");
    } else {
        printf("str1 and str2 are not equal\n");
    }

    printf("First occurrence of 'l' in str1: %s\n", strchr(str1, 'l'));
    printf("First occurrence of 'wor' in str3: %s\n", strstr(str3, "wor"));

    char str4[20];
    strncpy(str4, str3, 5);
    str4[5] = '\0';
    printf("First 5 characters of str3: %s\n", str4);

    return 0;
}
