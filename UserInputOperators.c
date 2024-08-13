#include <stdio.h>

int main(){
	
	
	char operators;				//Declaring variables
	double num1;
	double num2;
	double result;
	
	printf("Enter the operators (+ - * /):");
	scanf("%c" ,&operators);
	
	printf("Enter number 1 :");
	scanf("%lf" ,&num1);
	
	printf("Enter number 2 :");
	scanf("%lf" ,&num2);
	
	switch(operators){	
		case '+':									//+ is a character so written '+'
			result=num1+num2;
			printf("\nResult: %.2lf" ,result);
			break;
		
		case '-':
			result=num1-num2;
			printf("\nResult: %.2lf" ,result);
			break;
		
		case '*':
			result=num1*num2;
			printf("\nResult: %.2lf" ,result);
			break;
		
		case '/':
			result=num1/num2;
			printf("\nResult: %.2lf" ,result);
			break;
			
		default:
			printf("%c is invalid operator !!!", operators);
	
	}
	
		return 0;
}
