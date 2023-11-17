#include <stdio.h>
#include <conio.h>

int main (){
    int num[5], largest=0, i;

    for (i=0; i<5; i++){
        printf("\n Enter the number : ");
        scanf("%d", &num[i]);

    }

    for (i=0; i<5; i++){
        if (largest < num[i]){
            largest = num[i];

        }
        
    }
    printf("\n The largest number is : %d", largest);
    return 0;
}