#include <stdio.h>

int main() {
  char str1[20], str2[20];
  int len1 = 0, len2 = 0;

  printf("Enter string 1: ");
  gets(str1);

  printf("Enter string 2: ");
  gets(str2);

  while (str1[len1] != '\0') {
    len1++;
  }

  while (str2[len2] != '\0') {
    str1[len1] = str2[len2];
    len1++;
    len2++;
  }

  str1[len1] = '\0';

  printf("Concatenated string: %s\n", str1);

  return 0;
}
