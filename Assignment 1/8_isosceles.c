#include <stdio.h>
int main(){
    int a, b, c;
    printf("Enter value for a,b and c");
    scanf("%d%d%d", &a, &b, &c);
    if(a == b || b == c || c == a){
    printf("given triangle is isosceles");
    }
    else{
        printf("given triangle is not isosceles");
    }
    return 0;

}