#include <stdio.h>
int main(){
    int side1,side2,base,perimeter;
    printf("\n Enter side 1:");
    scanf("%d",&side1);
    printf("\n Enter side 2:");
    scanf("%d",&side2);
    printf("\n Enter base:");
    scanf("%d",&base);
    perimeter=side1+side2+base;
    printf("\n Perimeter is %d",perimeter);
    return 0;
    }
