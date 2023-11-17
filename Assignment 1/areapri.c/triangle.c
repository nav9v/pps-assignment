#include<stdio.h>
int main(){
int area, peri,h,a,b,c;

    printf("\nEnter the side a of triangle:");
    scanf("%d",&a);
    printf("\nEnter the side b of triangle:");
    scanf("%d",&b);
    printf("\nEnter the side c of triangle:");
    scanf("%d",&c);
    printf("\n Enter the height of triangle:");
    scanf("%d",&h);

    area=(b*h)/2; 
    peri=a+b+c;
    printf("\n Perimeter :%d",peri);
    printf("\n Area :%d",area);
    return 0;
}