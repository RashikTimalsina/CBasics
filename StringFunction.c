#include <stdio.h>
#include <string.h>

int main(){
	
	char string1[]="Rashik";
	char string2[]="Timalsina";
	
	//strupr(string1);					//converts string to uppercase
	//strlwr(string1);					//converts string to lowercase
	//strcat(string1, string2);			//appends string2 to end of string1 (combined 1 & 2)
	//strncat(string1, string2, 1);		//appends n characters from string2 to string1
	//strcpy(string1, string2);			//copy string2 to string1
	//strncpy(string1, string2, 1);		//copy n characters of string2 to string1
	
	//strset(string1, '$');				//sets all characters of a string to a given character
	//strnset(string1, 'a' ,1);			//sets first n characters of a string to a given character
	strrev(string1);					//reverses a string
	strrev(string2);		
	
	printf("%s " ,string1);
	printf("%s ",string2);
			
	return 0;
}
