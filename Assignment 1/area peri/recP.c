#include <stdio.h>
int main(){
    int l,w,perimeter;
    printf("Enter length of rectangle: \n");
    scanf("%d",&l);
    printf("Enter width of rectangle: \n");
    scanf("%d",&w);
    perimeter = (2*l) + (2*w);
    printf("Perimeter of rectangle: %d",perimeter);
    return 0;
    
}