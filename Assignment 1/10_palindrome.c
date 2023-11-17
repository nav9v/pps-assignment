#include <stdio.h>
int main(){
    int n,r,temp,rev=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    temp=n;
    while(n>0){
        r=n%10;
        rev=(rev*10)+r;
        n=n/10;
   }
    if(temp==rev){
    printf("Number is Palindrome : %d",temp);
    }
    else{
    printf("Number is not a Palindrome : %d",temp);
    }

}
