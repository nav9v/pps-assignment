#include<stdio.h>
int main(){
    int area, peri, r;
    printf("Enter length of radius : ");
    scanf("%d", &r);
    area = 3.14*r*r;
    peri = 2*3.14*r;
    printf("Area: %d\n", area);
    printf("Perimeter: %d\n", peri);
    return 0;
    }
