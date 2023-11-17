#include<stdio.h>
int main(){
    int i,sum,n;
    printf("\n Enter a number:");
    scanf("%d",&n);
    sum=0;
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("\n The sum of the first %d positive integers is %d",n,sum);
    return 0;
}