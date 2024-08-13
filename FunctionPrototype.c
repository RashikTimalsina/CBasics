#include <stdio.h>

//void hello(char[] ,int);			//Function Prototype(It assures the arguments passed)

int main(){
	
	//Function Prototype
	
	//What is it?
	//Function declaration,without a body,before main()
	//ensures that calls to a function are made with the correct arguments
	
	//Important notes
	//Many C compilers do not check for parameter checking
	//Misising arguments will result in unexpected behaviour.
	//A function prototype causess the compiler to flag an error if arguments are missing
	
	//ADVANTAGES
	//easier to navigate a program with main() at the top
	//helps with debugging
	//commonly used in header files.
		
		char name[]="Rashik Timalsina";
		int age=19;
		
		hello(name,age);
		
		return 0;

}

void hello(char name[] ,int age){

	printf("Hello %s\n ",name);
	printf("You are %d years old\n " ,age);	
	
}
