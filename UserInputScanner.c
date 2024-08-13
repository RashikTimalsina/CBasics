#include <stdio.h>

int main(){
	
	int age;
	
	printf("\nHow old are you?");
	scanf("%d",&age);				//(&)=addressing operator
	
	printf("You are %d years old" ,age);		//%d is replaced by age in output
	
	return 0;
	
}
