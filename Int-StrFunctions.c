#include <stdio.h>
#include <string.h>

int main(){
	
	
	char string1[]="Rashik";
	char string2[]="Timalsina";
	
	//int result=strlen(string1);					//returns string lengths as int
	//int result=strcmp(string1, string2); 		//string compare all characters
	//int result=strncmp(string1, string2, 1);		//string compare n characters
	//int result=strcmpi(string1, string1);			//string compare all(ignore case)
	int result=strnicmp(string1, string1, 1);		//string compare n characters (ignore case)
	
	
	printf("%d ",result);
		
	return 0;
}
