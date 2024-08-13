#include <stdio.h>

int main(){
	
	//Our first calculator in c,
	
	//declaring variables;
	int firstNumber = 100;
	int secondNumber =40;
	int sum, sub, mul, div, mod;
	
	
	//Calculating;
	sum = firstNumber + secondNumber;
	sub = firstNumber - secondNumber;
	mul = firstNumber * secondNumber;
	div = firstNumber / secondNumber;
	mod = firstNumber % secondNumber;
 	
 	//Printing;
	printf("The sum is %d\n",sum);
	printf("The sub is %d\n",sub);
	printf("The mul is %d\n",mul);
	printf("The div is %d\n",div);
	printf("The mod is %d\n",mod);
    	
		return 0;
}
