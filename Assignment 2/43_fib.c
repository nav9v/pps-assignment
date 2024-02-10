#include <stdio.h>

int fib(int n);

int main(){
    int n, i;
    printf("Enter the number of terms in Fibonacci series: ");
    scanf("%d", &n);
    printf("Fibonacci series:\n");
    for(i=0; i<n; i++){
        printf("%d ", fib(i));
    }
    return 0;
}

int fib(int n){
    if(n<=1){
        return n;
    }
    return fib(n-1) + fib(n-2);
}
