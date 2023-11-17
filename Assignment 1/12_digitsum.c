#include <stdio.h>
int main(){
    int num, r, sum=0;
    printf("Enter the number: ");
    scanf("%d", &num);
    while (num!=0){
        r=num%10;
        sum=sum+r;
        num=num/10;
        }
        printf("The sum of its digits is %d \n",sum);
        return 0;
    }
