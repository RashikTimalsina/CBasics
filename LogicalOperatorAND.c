#include <stdio.h>
#include <stdbool.h>			//only if bool statement is used

int main(){
	
	
	//logical Operators = && (AND) checks if all given conditions are true..
	
	
	float temp=25;	        //Value inserted is betweeen the range so it meets if condition
	//float temp=32;		   //Value inserted isnotbetweeen the range so it meets else condition
	
	bool sunny=true;		//boolean value declared here must meet the condition to meet ifcon
	
	if(temp>=0 && temp<=30 && sunny){			
		
		printf("\nThe weather is good !");
		
	}		
	else{
		
		printf("\nThe weather is bad ! ");
	
	}
	
	return 0;
}
