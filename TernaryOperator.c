#include <stdio.h>

int findMin(int x, int y){
	
	return (x>y)? x:y;			//shortcut to if statement;
	
}

int main(){
		
	//ternary operator = shortcut to if/else statement when assigning/returning a value;
	//(condition)? value if true: value if false.
		
	int min=findMin(4,3);
	printf("%d\n ",min);	
		
	return 0;
}
