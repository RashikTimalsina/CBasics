#include <stdio.h>

int main(){
	
	int age;
	
	printf("Enter your age :");
	scanf("\n%d",&age);
		
	if(age>=18){
		
		printf("You are eligible to vote !");
		
	}
	else if(age<=0){
		
		printf("You haven't born yet !");

	}
	else{
		
		printf("Sorry! you can't vote !");
		
	}
	
	return 0;
}
