#include <stdio.h>

int main(){
	
		//switch = A more efficient alternative to using many "else if" statements 
		//allows a value to be tested for equality against many cases
		
	char grade;
	
	printf("Enter a letter grade:");	
	scanf("\n%c",&grade);
	
	switch(grade){
		case'A':
			printf("Excellent !\n");
			break;
		case'B':
			printf("Very good !\n");
			break;
		case'C':
			printf("Satisafactory !\n");
			break;
		case'D':
			printf("Not Enough !\n");
			break;
		case'E':
			printf("Failed !\n");
			break;
		default :
			printf("Please enter only valid grades !!!");
	}
	
		return 0;
	
}
