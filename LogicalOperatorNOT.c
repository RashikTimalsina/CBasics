#include <stdio.h>
#include <stdbool.h>

int main(){
	
	
	//logical Operators = !(NOT) reverses the state of a condition
	
	bool sunny=true;
	
	if(!sunny){					//!=reversed condition
	//if(sunny == true / false){	
	//if(sunny == 1 / 0){		
		printf("\nIt's sunny outside ");
		
	}
	else{
		
		printf("\nIt's cloudy outside");
	
	}
	
	return 0;
	
}
