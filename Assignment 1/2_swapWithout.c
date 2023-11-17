#include<stdio.h>
int main() {
  int x,y;
  printf("Enter value of x: ");
  scanf("%d",&x);
  printf("Enter value of y: ");
  scanf("%d",&y);
  printf("\n Before swapping");
  printf("\n x = %d, y = %d",x,y);
     x=x+y;
     y=x-y;
     x=x-y;

  printf("\n After swapping");
  printf("\n x = %d, y = %d",x,y);
  return 0;
  }