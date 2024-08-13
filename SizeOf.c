#include <stdio.h>

int main(){
	
	int age=19;
	char gen='M';
	float salary=122.25f;
	double y=12.2312;
	
	printf("Size of integer is %d bytes\n ",sizeof(age));
	printf("Size of character is %d bytes\n ",sizeof(gen));
	printf("Size of floating value is %d bytes\n ",sizeof(salary));
	printf("Size of double value is %d bytes\n ",sizeof(y));
	
}
