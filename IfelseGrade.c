#include <stdio.h>

int main(){
	
	
	//switch = A more efficient alternative to using many "else if" statements 
	//			allows a value to be tested for equality against many cases
	
	
	char grade;
	
	printf("Enter a letter grade:");	
	scanf("\n%c",&grade);
	
	if(grade=='A'){
		
		printf("Excellent !\n");
		
	}
	else if(grade=='B'){
		
		printf("Very good !\n");
		
	}
	else if(grade=='C'){
		
		printf("Not bad !/n");
		
	}
	else if(grade=='D'){
		
		printf("Very Poor !\n");
		
	}
	else{
		
		printf("You are failed !!!\n");
	}
	
	return 0;
}
