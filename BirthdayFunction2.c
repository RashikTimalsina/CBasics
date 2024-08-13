#include <stdio.h>-

void birthday(char x[],int y){			//Parameters are passed
	
	printf("Happy birthday dear %s\n" ,x);
	printf("\nYou are %d years old ",y);
	
}

int main(){
	
	char name[]="Roshani";
	int age=16;
	
	birthday(name,age);						//Arguments are passed
			
	return 0;
}
