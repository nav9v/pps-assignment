#include<stdio.h>
int main() {
  int x,y,temp;
  printf("Enter value of x: ");
  scanf("%d",&x);
  printf("Enter value of y: ");
  scanf("%d",&y);
  printf("\n Before swapping");
  printf("\n x = %d, y = %d",x,y);
     temp =x;
     x = y;
     y = temp;
  printf("\n After swapping");
  printf("\n x = %d, y = %d",x,y);
  return 0;
  }