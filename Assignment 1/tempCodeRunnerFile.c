#include <stdio.h>
int main(){
    int a,b;
    printf("\n enter value of a:");
    scanf("%d",&a);
    printf("\n enter value of b:");
    scanf("%d",&b);

    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n value of a: %d, value of b: %d",a ,b);

    return 0;

}