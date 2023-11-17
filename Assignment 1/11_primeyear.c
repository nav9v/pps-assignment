#include <stdio.h>
int main() {
  int n, i, prime = 1;
  printf("\n check year is prime or not");
  printf("Enter any number n:\n");
  scanf("%d", &n);

 
  for (i = 2; i < n; i++) {
      if (n % i == 0) {
         prime = 0;
         break;
      }
  }

  if (prime && n > 1 ) {
        printf("n is a Prime number");
  }
  else {
         printf("n is not a Prime number");
  }
  return 0;    
}
