#include <stdio.h>

int main() {
    FILE *src, *dest;
    char ch;

    src = fopen("input.txt", "r");
    if (src == NULL) {
        printf("Failed to open input file.\n");
        return 0;
    }

    dest = fopen("output.txt", "w");
    if (dest == NULL) {
        printf("Failed to open output file.\n");
        fclose(src);
        return 0;
    }

    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    printf("File copied successfully.\n");

    fclose(src);
    fclose(dest);

    return 0;
}
