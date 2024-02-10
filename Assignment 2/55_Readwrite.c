#include <stdio.h>

int main() {
    char filename[] = "example.txt";
    char input[100];
    FILE *fp;
 
    fp = fopen(filename, "w");
    printf("Enter some data to write to file: ");
    fgets(input, 100, stdin);
    fputs(input, fp);
    fclose(fp);

    fp = fopen(filename, "r");
    printf("Contents of %s:\n", filename);
    while (fgets(input, 100, fp) != NULL) {
        printf("%s", input);
    }
    fclose(fp);

    fp = fopen(filename, "a");
    printf("\nEnter more data to append to file: ");
    fgets(input, 100, stdin);
    fputs(input, fp);
    fclose(fp);

    fp = fopen(filename, "r");
    printf("\nFinal contents of %s:\n", filename);
    while (fgets(input, 100, fp) != NULL) {
        printf("%s", input);
    }
    fclose(fp);

    return 0;
}
