#include <stdio.h>
#include <string.h>

int main() {
  char str1[20], str2[20];
  int result;
  
  printf("Enter string 1: ");
  gets(str1);

  printf("Enter string 2: ");
  gets(str2);
  result = 0;
  for(int i = 0; str1[i] != '\0' || str2[i] != '\0'; i++){
    if(str1[i] != str2[i]){
      result = 1;
      break;
    }
  }
  if(result == 0){
    printf("Strings are equal\n");
  }
  else{
    printf("Strings are not equal\n");
  }
return 0;
}