#include <stdio.h>

int main(){
	
	int numbertoTest;
	int remainder;
	

	printf("\nEnter your number to be tested ");
	scanf("%d ",&numbertoTest);
	remainder=numbertoTest%2;	
	
	
	if(remainder==0){
		
		printf("The number is even\n");
	}
	else{
	
	
		printf("The number is odd\n ");	

	}
	
	return 0;
}
