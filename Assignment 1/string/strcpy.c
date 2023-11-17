#include <stdio.h>
#include <string.h>

int main() {
  char name[20], copy[20];
  printf("Enter a string: ");
  gets(name);
  for(int i = 0; name[i] != '\0'; i++){
    copy[i] = name[i];
  }
  copy[strlen(name)] = '\0';
  printf("Copied string is: %s", copy);
  return 0;
}
