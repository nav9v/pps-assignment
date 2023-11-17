#include <stdio.h>
int main(){
	int fact,i,n;
	
	printf("\n Enter the number:");
	
	scanf("%d",&n);
    fact=1;
    for (i=1;i<=n;i++)
    {
	
       (fact=fact*i);
       
    }
    printf("\n Factorial of number: %d",fact);
    
    return 0;
}
