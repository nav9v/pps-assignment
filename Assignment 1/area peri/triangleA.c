#include <stdio.h>
int main(){
    int height,base,area;
    printf("Enter the height of the triangle: ");
    scanf("%d",&height);
    printf("Enter the base of the triangle: ");
    scanf("%d",&base);
    area=(height*base)/2;
    printf("The area of the triangle is: %d",area);
    return 0;
    }
