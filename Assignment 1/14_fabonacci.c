#include <stdio.h>
int main(){

    int i, n, t1=0,t2=1, p;

    printf("Enter number of turns :\n");

    scanf("%d", &n);
    int l= t1+t2;

    printf("Fibonacci Series :\n");
    printf("%d ",l);
    for(i=0;i<n;i++){
        
        p=t1+t2;

        t1=t2;

        t2=p;
        printf("%d ", p);
        }

        return 0;
}