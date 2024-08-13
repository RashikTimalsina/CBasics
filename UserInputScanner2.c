#include <stdio.h>

int main(){
	
	char name[25];				//bytes exceeding will create overflow
	
	printf("\nWhat is your name?");
	scanf("%s", &name);
	
	printf("Your name is %s" ,name);
	
	return 0;
	
}
