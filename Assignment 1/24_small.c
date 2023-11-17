#include <stdio.h>
int main(){
	int num[5],smallest=0,i;
	
	for(i=0;i<5;i++){
		printf("\n Enter the num:");
	    scanf("\n %d",&num[i]);
	}
	     smallest=num[1];
	for (i=0; i<5; i++){
         if(smallest > num[i])
           smallest = num[i];
    }
	{
		printf("\n smallest number: %d",smallest);
	
	}
	return 0;
	
}
