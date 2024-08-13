#include <stdio.h>

int main(){
	 
	  //Declaring variables;
	int firstNumber, secondNumber, sum, sub, mul, div, mod;


      //Getting user Input;
      printf("Enter first Number:\n");
      scanf("%d",&firstNumber);

      printf("Enter second Number:\n");
      scanf("%d",&secondNumber);
    
      
      //Calculating;
	sum = firstNumber + secondNumber;
	sub = firstNumber - secondNumber;
	mul = firstNumber * secondNumber;
	div = firstNumber / secondNumber;
	mod = firstNumber % secondNumber;
 	
	printf("The sum is %d\n",sum);
	printf("The sub is %d\n",sub);
	printf("The mul is %d\n",mul);
	printf("The div is %d\n",div);
	printf("The mod is %d\n",mod);
    	
		return 0;
}
