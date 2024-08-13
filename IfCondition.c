#include <stdio.h>

/*
If Condition:It tells the program to perform certain task only.

Syntax: if(condition)
        statement;
        

*/

int main(){
	
	int age;
	
	printf("Enter Your Age:");
	scanf("%d",&age);			//Using UserInput
	
	if(age>22){
		
		printf("You can vote");
		
	}

	return 0;
	
}
