#include <stdio.h>

int main(){
	
	char name[25];				// bytes exceeding will create overflow
	
	printf("\nWhat is your name?");
	
	fgets(name,25,stdin);			// using this function will show whitespace 
	
	printf("Your name is %s" ,name);
	
	return 0;
	
}
